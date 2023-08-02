#include <iostream>
#include <vector>

using namespace std;

struct segment_tree
{
    segment_tree *left, *right;
    int from, to, value;

    segment_tree(int _from, int _to)
        : from(_from), to(_to), left(NULL), right(NULL), value(1) {} //elementro neutro
};

 segment_tree* build(const vector<int> &arr, int l, int r)
    {
        if(l > r) return NULL;
        segment_tree *res = new segment_tree(l, r);
        if (l == r)
        {
            res->value = arr[l];
        }
        else
        {
            int m = (l + r) / 2;
            res->left = build(arr, l, m);
            res->right = build(arr, m + 1, r);
            if (res->left != NULL) res->value *= res->left->value;
            if (res->right != NULL) res->value *= res->right->value; //alterar operação
        }
        return res;
    }
    int query(segment_tree *tree, int l , int r)
    {
        if (tree == NULL) return 1;
        if (l <= tree->from && tree->to <= r) return tree->value;
        if (tree->to < l) return 1;
        if (r < tree->from) return 1;
        return query(tree->left, l, r) * query(tree->right, l, r);
    }

    int update(segment_tree *tree, int i, int val)
    {
        if (tree == NULL) return 1;
        if (tree->to < i) return tree->value;
        if (i < tree->from) return tree->value;

        if (tree->from == tree->to && tree->from == i) tree->value = val;
        else tree->value = update(tree->left, i, val) + update (tree->right, i, val);
        return tree->value;
    }


int main ()
{
    int n, k, aux, acumulador;
    char command;
    vector <int> v;
    int a, b;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> aux;
        if(aux > 0) aux = 1;
        else if(aux < 0) aux = -1;
        else aux = 0;
        v.push_back(aux);
    }

    segment_tree *tree = build(v, 0, n-1);

    for(int i = 0; i < k; i++)
    {
        cin >> command >> a >> b;
        a--;

        if(command == 'C')
        {
            if(b > 0) update(tree, a, 1);
            else if(b < 0) update(tree, a, -1);
            else update(tree, a, 0);
        }
        else
        {
            b--;
            acumulador = query(tree, a, b);
            if (acumulador > 1)
            {
                cout << "+";
            }
            else if (acumulador < 1)
            {
                cout << "-";
            }
            else
            {
                cout << "0";
            }
            cout << endl;
            v.clear();
        }
    }


    return 0;
}
