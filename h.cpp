#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
  vector<vector<int> > items;
  int k = 0;

  for ( int i = 0; i < 5; i++ ) {
    items.push_back ( vector<int>() );

    for ( int j = 0; j < 5; j++ )
      items[i].push_back ( k++ );
  }

  for ( int i = 0; i < 5; i++ ) {
    for ( int j = 0; j < 5; j++ )
      cout<< setw ( 3 ) << items[i][j] <<' ';
    cout<<'\n';
  }
}