#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

namespace ariel {

    struct node{
        string str;
        int numOfDepth;
        vector <node> tree;
    };

    class OrgChart {
        private:
            node node;
            int num;
        public:
            OrgChart();
            OrgChart &add_root(string root);
            OrgChart &add_sub(string father, string son);
            string *begin_level_order();
            string *end_level_order();
            string *begin_reverse_order();
            string *end_reverse_order();
            string *begin_preorder();
            string *end_preorder();
            string *reverse_order();
            int *begin(); 
            int *end();
            friend ostream &operator<<(ostream &out, const OrgChart &root);
            ~OrgChart();
        };

}