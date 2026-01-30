#include "System_Text_RegularExpressions_RegexCharClass.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexCharClass::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Text.RegularExpressions", "RegexCharClass");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexCharClass::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Text::RegularExpressions::RegexCharClass::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::_ctor(bool negate, mscorlib::System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass_SingleRange>* ranges, mscorlib::System::Text::StringBuilder* categories, System::Text::RegularExpressions::RegexCharClass* subtraction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange>", "System.Text.StringBuilder", "System.Text.RegularExpressions.RegexCharClass" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&negate;
	params[1] = (intptr_t)ranges;
	params[2] = (intptr_t)categories;
	params[3] = (intptr_t)subtraction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Text::RegularExpressions::RegexCharClass::get_CanMerge()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CanMerge");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System::System::Text::RegularExpressions::RegexCharClass::set_Negate(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Negate", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddChar(wchar_t c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddChar", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddCharClass(System::Text::RegularExpressions::RegexCharClass* cc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCharClass", std::vector<std::string> { "System.Text.RegularExpressions.RegexCharClass" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cc;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddSet(mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSet", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddSubtraction(System::Text::RegularExpressions::RegexCharClass* sub)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSubtraction", std::vector<std::string> { "System.Text.RegularExpressions.RegexCharClass" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sub;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddRange(wchar_t first, wchar_t last)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRange", std::vector<std::string> { "System.Char", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&first;
	params[1] = (intptr_t)&last;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddCategoryFromName(mscorlib::System::String* categoryName, bool invert, bool caseInsensitive, mscorlib::System::String* pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCategoryFromName", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)categoryName;
	params[1] = (intptr_t)&invert;
	params[2] = (intptr_t)&caseInsensitive;
	params[3] = (intptr_t)pattern;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddCategory(mscorlib::System::String* category)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)category;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddLowercase(mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLowercase", std::vector<std::string> { "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddLowercaseRange(wchar_t chMin, wchar_t chMax, mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddLowercaseRange", std::vector<std::string> { "System.Char", "System.Char", "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&chMin;
	params[1] = (intptr_t)&chMax;
	params[2] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddWord(bool ecma, bool negate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddWord", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ecma;
	params[1] = (intptr_t)&negate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddSpace(bool ecma, bool negate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSpace", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ecma;
	params[1] = (intptr_t)&negate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Text::RegularExpressions::RegexCharClass::AddDigit(bool ecma, bool negate, mscorlib::System::String* pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDigit", std::vector<std::string> { "System.Boolean", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ecma;
	params[1] = (intptr_t)&negate;
	params[2] = (intptr_t)pattern;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
wchar_t System::System::Text::RegularExpressions::RegexCharClass::SingletonChar(mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SingletonChar", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		wchar_t ret;
		std::memset(&ret, 0, sizeof(wchar_t));
		return ret;
	}
	return static_cast<wchar_t>(*(wchar_t*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsMergeable(mscorlib::System::String* charClass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMergeable", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)charClass;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsEmpty(mscorlib::System::String* charClass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEmpty", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)charClass;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsSingleton(mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSingleton", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsSingletonInverse(mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSingletonInverse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsSubtraction(mscorlib::System::String* charClass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSubtraction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)charClass;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsNegated(mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsNegated", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsECMAWordChar(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsECMAWordChar", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::IsWordChar(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsWordChar", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::CharInClass(wchar_t ch, mscorlib::System::String* set)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharInClass", std::vector<std::string> { "System.Char", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)set;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::CharInClassRecursive(wchar_t ch, mscorlib::System::String* set, int32_t start)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharInClassRecursive", std::vector<std::string> { "System.Char", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)set;
	params[2] = (intptr_t)&start;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::CharInClassInternal(wchar_t ch, mscorlib::System::String* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharInClassInternal", std::vector<std::string> { "System.Char", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)set;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&mySetLength;
	params[4] = (intptr_t)&myCategoryLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::CharInCategory(wchar_t ch, mscorlib::System::String* set, int32_t start, int32_t mySetLength, int32_t myCategoryLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharInCategory", std::vector<std::string> { "System.Char", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)set;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&mySetLength;
	params[4] = (intptr_t)&myCategoryLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool System::System::Text::RegularExpressions::RegexCharClass::CharInCategoryGroup(wchar_t ch, mscorlib::System::Globalization::UnicodeCategory chcategory, mscorlib::System::String* category, int32_t& i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharInCategoryGroup", std::vector<std::string> { "System.Char", "System.Globalization.UnicodeCategory", "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)&chcategory;
	params[2] = (intptr_t)category;
	params[3] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexCharClass::NegateCategory(mscorlib::System::String* category)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "NegateCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)category;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::Text::RegularExpressions::RegexCharClass* System::System::Text::RegularExpressions::RegexCharClass::Parse(mscorlib::System::String* charClass)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Parse", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)charClass;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Text::RegularExpressions::RegexCharClass*)returnValue;
}
System::System::Text::RegularExpressions::RegexCharClass* System::System::Text::RegularExpressions::RegexCharClass::ParseRecursive(mscorlib::System::String* charClass, int32_t start)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseRecursive", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)charClass;
	params[1] = (intptr_t)&start;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Text::RegularExpressions::RegexCharClass*)returnValue;
}
int32_t System::System::Text::RegularExpressions::RegexCharClass::RangeCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RangeCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexCharClass::ToStringClass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToStringClass");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
System::System::Text::RegularExpressions::RegexCharClass_SingleRange* System::System::Text::RegularExpressions::RegexCharClass::GetRangeAt(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRangeAt", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Text::RegularExpressions::RegexCharClass_SingleRange*)returnValue;
}
void System::System::Text::RegularExpressions::RegexCharClass::Canonicalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Canonicalize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::Text::RegularExpressions::RegexCharClass::SetFromProperty(mscorlib::System::String* capname, bool invert, mscorlib::System::String* pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFromProperty", std::vector<std::string> { "System.String", "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)capname;
	params[1] = (intptr_t)&invert;
	params[2] = (intptr_t)pattern;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
