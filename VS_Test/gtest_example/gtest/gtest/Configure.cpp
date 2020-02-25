#include "Configure.h" 
#include <iostream>


#include <algorithm> 

using namespace std;

/**
* @brief Add an item to configuration store. Duplicate item will be ignored
* @param str item to be stored
* @return the index of added configuration item
*/
int Configure::addItem(std::string str)
{
	std::vector<std::string>::const_iterator vi = std::find(vItems.begin(), vItems.end(), str);
	if (vi != vItems.end())
		return vi - vItems.begin(); // return the duplicated index

	vItems.push_back(str);
	return vItems.size() - 1;
}

/**
* @brief delete an item to configuration store. 
* @param str item to be deleted
* @return 0 if find element, -1 if not found
*/
int Configure::deleteItem(std::string str)
{
	std::vector<std::string>::iterator vo = std::find(vItems.begin(), vItems.end(), str);
	if (vo != vItems.end())
	{
		vItems.erase(vo);

		return 0;
	}
		
	else
	{
		cout << "Element not Found!!" << endl;

		return -1;
	}

}

/**
* @brief Return the configure item at specified index.
* If the index is out of range, "" will be returned
* @param index the index of item
* @return the item at specified index
*/
std::string Configure::getItem(int index)
{
	if (index >= static_cast<int>(vItems.size()))
		return "";
	else
		return vItems.at(index);
}

/// Retrieve the information about how many configuration items we have had 
int Configure::getSize()
{
	return vItems.size();
}