#include <vector>
#include "Student_info.h"
#include "grade.h"

using std::vector;

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();

    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            // erase's parameter nee to be iterator
            iter = students.erase(iter);
        } else {
            ++iter;
        }
    }

    return fail;
}
