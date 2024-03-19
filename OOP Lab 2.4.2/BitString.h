#pragma once
#include <iostream>
#include <string>

using namespace std;

class BitString {
private:
	static const int MAX_SIZE = 100;
	int size;
	unsigned char bits[MAX_SIZE / 8 + 1];
public:
	BitString() {
	};
	BitString(int)  {}
	BitString(const BitString& other) {
		size = other.size;
		for (int i = 0; i < MAX_SIZE / 8 + 1; ++i)
			bits[i] = other.bits[i];
	}
	~BitString() {
	};
	

	int getSize() const {return size;}
	void setSize(int newSize) {size = newSize;}
	void setBit(int index, bool value);
	bool getBit(int index) const;
	void display() const;
	friend BitString operator &(const BitString& other, const BitString& other2);
	friend BitString operator |(const BitString& other, const BitString& other2);
	friend BitString operator ^(const BitString& other, const BitString& other2);
	friend BitString operator ~(const BitString& other);
	friend BitString operator <<(const BitString& other, int shift);
	friend BitString operator >>(const BitString& other, int shift);
	BitString& operator =(const BitString& other);
	bool operator[](int index) const;
	operator string() const;
};