#include "System_Globalization_DateTimeFormatInfoScanner.h"

IL2CPP::Il2CppClass* mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Globalization", "DateTimeFormatInfoScanner");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* mscorlib::System::Globalization::DateTimeFormatInfoScanner::get_KnownWords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_KnownWords");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
int32_t mscorlib::System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter(mscorlib::System::String* pattern, int32_t currentIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SkipWhiteSpacesAndNonLetter", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pattern;
	params[1] = (intptr_t)&currentIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix(mscorlib::System::String* formatPostfix, mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDateWordOrPostfix", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)formatPostfix;
	params[1] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Globalization::DateTimeFormatInfoScanner::AddDateWords(mscorlib::System::String* pattern, int32_t index, mscorlib::System::String* formatPostfix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddDateWords", std::vector<std::string> { "System.String", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pattern;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)formatPostfix;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar(mscorlib::System::String* pattern, wchar_t ch, int32_t index, int32_t& count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanRepeatChar", std::vector<std::string> { "System.String", "System.Char", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)pattern;
	params[1] = (intptr_t)&ch;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddIgnorableSymbols", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Globalization::DateTimeFormatInfoScanner::ScanDateWord(mscorlib::System::String* pattern)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScanDateWord", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pattern;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<mscorlib::System::String*>* mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI(mscorlib::System::Globalization::DateTimeFormatInfo* dtfi)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDateWordsOfDTFI", std::vector<std::string> { "System.Globalization.DateTimeFormatInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dtfi;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
mscorlib::System::Globalization::FORMATFLAGS mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth(IL2CPP::Array<mscorlib::System::String*>* monthNames, IL2CPP::Array<mscorlib::System::String*>* genitveMonthNames, IL2CPP::Array<mscorlib::System::String*>* abbrevMonthNames, IL2CPP::Array<mscorlib::System::String*>* genetiveAbbrevMonthNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFormatFlagGenitiveMonth", std::vector<std::string> { "System.String[]", "System.String[]", "System.String[]", "System.String[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)monthNames;
	params[1] = (intptr_t)genitveMonthNames;
	params[2] = (intptr_t)abbrevMonthNames;
	params[3] = (intptr_t)genetiveAbbrevMonthNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::FORMATFLAGS ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::FORMATFLAGS));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::FORMATFLAGS>(*(mscorlib::System::Globalization::FORMATFLAGS*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::FORMATFLAGS mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames(IL2CPP::Array<mscorlib::System::String*>* monthNames, IL2CPP::Array<mscorlib::System::String*>* genitveMonthNames, IL2CPP::Array<mscorlib::System::String*>* abbrevMonthNames, IL2CPP::Array<mscorlib::System::String*>* genetiveAbbrevMonthNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFormatFlagUseSpaceInMonthNames", std::vector<std::string> { "System.String[]", "System.String[]", "System.String[]", "System.String[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)monthNames;
	params[1] = (intptr_t)genitveMonthNames;
	params[2] = (intptr_t)abbrevMonthNames;
	params[3] = (intptr_t)genetiveAbbrevMonthNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::FORMATFLAGS ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::FORMATFLAGS));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::FORMATFLAGS>(*(mscorlib::System::Globalization::FORMATFLAGS*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::FORMATFLAGS mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames(IL2CPP::Array<mscorlib::System::String*>* dayNames, IL2CPP::Array<mscorlib::System::String*>* abbrevDayNames)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFormatFlagUseSpaceInDayNames", std::vector<std::string> { "System.String[]", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)dayNames;
	params[1] = (intptr_t)abbrevDayNames;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::FORMATFLAGS ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::FORMATFLAGS));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::FORMATFLAGS>(*(mscorlib::System::Globalization::FORMATFLAGS*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::FORMATFLAGS mscorlib::System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar(int32_t calID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFormatFlagUseHebrewCalendar", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&calID;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Globalization::FORMATFLAGS ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Globalization::FORMATFLAGS));
		return ret;
	}
	return static_cast<mscorlib::System::Globalization::FORMATFLAGS>(*(mscorlib::System::Globalization::FORMATFLAGS*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays(IL2CPP::Array<mscorlib::System::String*>* array1, IL2CPP::Array<mscorlib::System::String*>* array2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EqualStringArrays", std::vector<std::string> { "System.String[]", "System.String[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array1;
	params[1] = (intptr_t)array2;
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
bool mscorlib::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace(IL2CPP::Array<mscorlib::System::String*>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ArrayElementsHaveSpace", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
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
bool mscorlib::System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit(IL2CPP::Array<mscorlib::System::String*>* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ArrayElementsBeginWithDigit", std::vector<std::string> { "System.String[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
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
void mscorlib::System::Globalization::DateTimeFormatInfoScanner::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
