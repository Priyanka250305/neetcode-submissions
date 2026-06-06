/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {

    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;*/
class Codec {
public:
    string serialize(TreeNode* root) {
        string str;
        if (root == nullptr) {
            return "null,";
            // cout << str << endl;
            // return str;
        } // return string with added values if right isnt done

        //int num = root->val;
        // string s=to_string(num);
        // str.append(to_string(num) + ",");
        // str.append(",");
        str += to_string(root->val) + ",";

        str += serialize(root->left);

        str += serialize(root->right);
        //cout << str << endl;
        return str;
    }

    TreeNode* build(vector<string>& d, int& index) {

        if (d[index] == "null") {

            index++;

            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(d[index]));

        index++;

        root->left = build(d, index);

        root->right = build(d, index);

        return root;
    }

    TreeNode* deserialize(string data) {

        vector<string> d;

        string temp = "";

        for (char c : data) {

            if (c == ',') {

                d.push_back(temp);

                temp = "";
            } else {
                temp += c;
            }
        }

        int index = 0;

        return build(d, index);
    }
};