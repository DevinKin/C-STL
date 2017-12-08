#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

int main()
{
  // create empty vector for strings
  vector<string> sentence;

  // reverse memory for five elements to avoid reallocaition
  sentence.reserve(5);

  // apend some elements
  sentence.push_back("Hello,");
  sentence.insert(sentence.end(), {"how", "are", "your", "?"});

  // print elements separated with spaces
  copy(sentence.cbegin(), sentence.cend(),
       ostream_iterator<string>(cout, " "));

  cout << endl;

  // print "technical data"
  cout << "  max_size(): " << sentence.max_size() << endl;
  cout << "  size(): " << sentence.size() << endl;
  cout << "  capacity(): " << sentence.capacity() << endl;

  // swap second and fourth element
  swap(sentence[1], sentence[4]);

  sentence.insert(find(sentence.cbegin(), sentence.cend(), "?"),
                       "always");
  sentence.back() = "!";
  copy(sentence.cbegin(), sentence.cend(),
       ostream_iterator<string>(cout, " "));
  cout << endl;

  // print some "technical data" again
  cout << "  size(): " << sentence.size() << endl;
  cout << "  capacity(): " << sentence.capacity() << endl;

  // delete last two elements
  sentence.pop_back();
  sentence.pop_back();

  // shrink capacity since (C++11)
  sentence.shrink_to_fit();

  // print some "technical data" again
  cout << "  size(): " << sentence.size() << endl;
  cout << "  capacity(): " << sentence.capacity() << endl;

}
