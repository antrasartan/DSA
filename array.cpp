#include <iostream>
using namespace std;

int main()
{
  int a[100], pos, elem, val, i, size, found = 0, n, del, last = 100;
  char ch;
  cout << "Enter the size of the array=";
  cin >> size;
  cout << endl;
  if (size < last)
  {
    cout << "Enter the elements in the array=";
    for (i = 0; i < size; i++)
      cin >> a[i];
    cout << "The array formed is=";
    for (i = 0; i < size; i++)
      cout << a[i] << " ";
    cout << endl;
    do
    {
      cout << "Insertion and Deletion of values in array" << endl;
      cout << "For Insertion of a value press........'I'" << endl;
      cout << "For Deletion of a value press.........'D'" << endl;
      cout << "Enter the character to perform a particular operation=";
      cin >> ch;
      cout << endl;
      switch (ch)
      {
      case 'I':
      {
        cout << "Selected operation is Insertion" << endl;
        cout << "For Inserting the value at a specified position press.......'1'" << endl;
        cout << "For Inserting the value before a specified position press.......'2'" << endl;
        cout << "For Inserting the value after a specified position press.......'3'" << endl;
        cout << "For Inserting the value before a particular element press.......'4'" << endl;
        cout << "For Inserting the value after a particular element press.......'5'" << endl;
        cout << "Enter your choice for insertion operation=";
        cin >> n;
        cout << endl;
        cout << "Enter the element to insert in the array=";
        cin >> elem;
        switch (n)
        {
        case 1:
        {
          cout << "Enter the index number at which you want to insert the new element=";
          cin >> pos;
          cout << endl;
          for (i = size; i > pos; i--)
            a[i] = a[i - 1];
          a[pos] = elem;
          size++;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 2:
        {
          cout << "Enter the index number before which you want to insert the new element=";
          cin >> pos;
          cout << endl;
          for (i = size; i >= pos; i--)
            a[i] = a[i-1];
          a[pos-1] = elem;
          size++;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 3:
        {
          cout << "Enter the index number after which you want to insert the new element=";
          cin >> pos;
          cout << endl;
          for (i = size; i > pos; i--)
            a[i] = a[i - 1];
          a[pos + 1] = elem;
          size++;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 4:
        {
          cout << "Enter the element before which you want to insert the new element=";
          cin >> val;
          cout << endl;
          for (i = 0; i < size; i++)
          {
            if (a[i] == val)
            {
              found = 1;
              pos = i;
              break;
            }
          }
          if (found == 1)
          {
            for (i = size; i >= pos; i--)
              a[i] = a[i - 1];
            a[pos] = elem;
            size++;
            cout << "The new array formed is=";
            for (i = 0; i < size; i++)
              cout << a[i] << endl;
          }
          else
            cout << "Value not found";
        }
        break;
        }
        case 5:
        {
          cout << "Enter the element after which you want to insert the new element=";
          cin >> val;
          cout << endl;
          for (i = 0; i < size; i++)
          {
            if (a[i] == val)
            {
              found = 1;
              pos = i;
              break;
            }
          }
          if (found == 1)
          {
            cout << endl;
            for (i = size; i > pos; i--)
              a[i] = a[i - 1];
            a[pos + 1] = elem;
            size++;
            cout << "The new array formed is=";
            for (i = 0; i < size; i++)
              cout << a[i] << endl;
          }
          else
            cout << "Value not found";
        }
        break;
      }
      case 'D':
      {
        cout << "Selected operation is Deletion" << endl;
        cout << "For Deleting the value at a specified position press.......'1'" << endl;
        cout << "For Deleting the value before a specified position press.......'2'" << endl;
        cout << "For Deleting the value after a specified position press.......'3'" << endl;
        cout << "For Deleting the value before a particular element press.......'4'" << endl;
        cout << "For Deleting the value after a particular element press.......'5'" << endl;
        cout << "Enter your choice for deletion operation=";
        cin >> n;
        cout << endl;
        switch (n)
        {
        case 1:
        {
          cout << "Enter the size of the array=";
          cin >> size;
          cout << endl;
          cout << "Enter the elements of the array=";
          for (i = 0; i < size; i++)
            cin >> a[i];
          cout << "The array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << " ";
          cout << endl;
          cout << "Enter the index number to delete the element at the specified position=";
          cin >> pos;
          for (i = pos; i < size; i++)
            a[i] = a[i + 1];
          size--;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 2:
        {
          cout << "Enter the size of the array=";
          cin >> size;
          cout << endl;
          cout << "Enter the elements of the array=";
          for (i = 0; i < size; i++)
            cin >> a[i];
          cout << "The array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << " ";
          cout << endl;
          cout << "Enter the index number before which the element have to be deleted=";
          cin >> pos;
          for (i = pos - 1; i < size; i++)
            a[i] = a[i + 1];
          size--;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 3:
        {
          cout << "Enter the size of the array=";
          cin >> size;
          cout << endl;
          cout << "Enter the elements of the array=";
          for (i = 0; i < size; i++)
            cin >> a[i];
          cout << "The array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << " ";
          cout << endl;
          cout << "Enter the index number after which the element have to be deleted=";
          cin >> pos;
          for (i = pos + 1; i < size; i++)
            a[i] = a[i + 1];
          size--;
          cout << "The new array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << endl;
          break;
        }

        case 4:
        {
          cout << "Enter the size of the array=";
          cin >> size;
          cout << "Enter the elements of the array=";
          for (i = 0; i < size; i++)
            cin >> a[i];
          cout << "The array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << " ";
          cout << endl;
          cout << "Enter the element before which you want to delete the element=";
          cin >> val;
          for (i = 0; i < size; i++)
          {
            if (a[i] == val)
            {
              found = 1;
              pos = i;
              break;
            }
          }
          if (found == 1)
          {
            for (i = 0; i < size; i++)
            {
              if (i == pos)
              {
                del = pos - 1;
                a[del] = a[pos];
                a[pos] = a[pos + 1];
                pos++;
              }
            }

            size--;
            cout << "The new array formed is=";
            for (i = 0; i < size; i++)
              cout << a[i] << endl;
          }
          else
            cout << "Value not found";
          break;
        }

        case 5:
        {
          cout << "Enter the size of the array=";
          cin >> size;
          cout << "Enter the elements of the array=";
          for (i = 0; i < size; i++)
            cin >> a[i];
          cout << "The array formed is=";
          for (i = 0; i < size; i++)
            cout << a[i] << " ";
          cout << endl;
          cout << "Enter the element after which you want to delete the element=";
          cin >> val;
          for (i = 0; i < size; i++)
          {
            if (a[i] == val)
            {
              found = 1;
              pos = i;
              break;
            }
          }
          if (found == 1)
          {
            for (i = 0; i < size; i++)
            {
              if (i == pos + 1)
              {
                a[i] = a[i + 1];
                i++;
              }
            }
            size--;
            cout << "The new array formed is=";
            for (i = 0; i < size; i++)
              cout << a[i] << endl;
          }
          else
            cout << "Value not found";
          break;
        }
        }
        break;
      }
      default:
      {
        cout << "Invalid choice";
        break;
      }
      }
    } while (ch == 'I' || ch == 'D');

    return 0;
  }
}