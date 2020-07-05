#pragma once
#include "tree.h"
class node
{
	friend class tree;

protected:
	node(int wert) {
		this->wert = wert;
		left = right = nullptr;
	}

private:
	char wert;
	node* left, * right;
};
