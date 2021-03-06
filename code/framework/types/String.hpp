#ifndef STRING_H
#define STRING_H

#include <string>
#include "Data.hpp"

namespace uipf{


// String which is a specification of Data
class String : public Data {
	public:
		typedef SMARTPOINTER<String> ptr;
		typedef const SMARTPOINTER<String> c_ptr;

	public:
		// default constructor
		String() {};
		// constructor
		String(std::string s) : str_(s) {};
		// copy constructor
		String(const String& s) : str_(s.str_) {};
		// destructor
		~String(void){};

		// returns the value of the string
		std::string getContent() const;

		// sets the value of the string
		void setContent(std::string);

		// returns the data type of this data object: in this case: STRING
		Type getType() const override;

	private:
		// value of the string
		std::string str_;
};

} // namespace

#endif
