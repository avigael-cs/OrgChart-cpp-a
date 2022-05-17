#include "doctest.h"
#include "OrgChart.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("good case") {
    // test for some iterators forms
    OrgChart organization;
    organization.add_root("1");
    CHECK_NOTHROW(organization.add_sub("1", "2"));
    CHECK_NOTHROW(organization.add_sub("1", "3"));
    CHECK_NOTHROW(organization.add_sub("1", "4"));
    CHECK_NOTHROW(organization.add_sub("2", "5"));
    CHECK_NOTHROW(organization.add_sub("2", "6"));
    CHECK_NOTHROW(organization.add_sub("4", "7"));
    CHECK_NOTHROW(organization.add_sub("4", "8"));
    /*
                       1
                     / | \
                    2  3  4
                   /\     /\
                  5  6   7  8
    */
   OrgChart organization1;
    organization1.add_root("CEO");
    CHECK_NOTHROW(organization.add_sub("CEO", "CTO"));   // Now the CTO is subordinate to the CEO
    CHECK_NOTHROW(organization.add_sub("CEO", "CFO"));   // Now the CFO is subordinate to the CEO
    CHECK_NOTHROW(organization.add_sub("CEO", "COO"));   // Now the COO is subordinate to the CEO
    CHECK_NOTHROW(organization.add_sub("CTO", "VP_SW")); // Now the VP Software is subordinate to the CTO
    CHECK_NOTHROW(organization.add_sub("COO", "VP_BI")); // Now the VP_BI is subordinate to the COO

/*    CEO
       |--------|--------|
       CTO      CFO      COO
       |                 |
       VP_SW             VP_BI
 */

}
TEST_CASE("good & bad case") {
    OrgChart organization;
    CHECK_THROWS(organization.add_sub("1", "2"));
    CHECK_THROWS(organization.add_sub("2", "3"));
    CHECK_THROWS(organization.add_sub("3", "4"));
    CHECK_THROWS(organization.add_sub("4", "5"));
    CHECK_THROWS(organization.add_sub("5", "6"));
    CHECK_THROWS(organization.add_sub("6", "1"));
    CHECK_THROWS(organization.add_sub("7", "2"));
    CHECK_THROWS(organization.add_sub("8", "avivi"));
    CHECK_THROWS(organization.add_sub("9", "1"));
    CHECK_THROWS(organization.add_sub("10", "2"));
    CHECK_THROWS(organization.add_sub("11", "avivi"));
    CHECK_THROWS(organization.add_sub("22", "1"));
    CHECK_THROWS(organization.add_sub("13", "2"));
    CHECK_THROWS(organization.add_sub("14", "avivi"));
    CHECK_THROWS(organization.add_sub("15", "1"));
    CHECK_THROWS(organization.add_sub("16", "2"));
    CHECK_THROWS(organization.add_sub("17", "avivi"));
    CHECK_THROWS(organization.add_sub("18", "avivi"));
    CHECK_THROWS(organization.add_sub("19", "1"));
    CHECK_THROWS(organization.add_sub("20", "2"));
    CHECK_THROWS(organization.add_sub("21", "avivi"));
    CHECK_THROWS(organization.add_sub("22", "1"));
    CHECK_THROWS(organization.add_sub("23", "2"));
    CHECK_THROWS(organization.add_sub("24", "avivi"));
    CHECK_THROWS(organization.add_sub("25", "avivi"));
}