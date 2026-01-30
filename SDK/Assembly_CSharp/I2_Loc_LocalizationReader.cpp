#include "I2_Loc_LocalizationReader.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::LocalizationReader::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "LocalizationReader");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::LocalizationReader::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* Assembly_CSharp::I2::Loc::LocalizationReader::ReadTextAsset(UnityEngine_CoreModule::UnityEngine::TextAsset* asset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadTextAsset", std::vector<std::string> { "UnityEngine.TextAsset" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
bool Assembly_CSharp::I2::Loc::LocalizationReader::TextAsset_ReadLine(mscorlib::System::String* line, mscorlib::System::String& key, mscorlib::System::String& value, mscorlib::System::String& category, mscorlib::System::String& comment, mscorlib::System::String& termType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextAsset_ReadLine", std::vector<std::string> { "System.String", "System.String&", "System.String&", "System.String&", "System.String&", "System.String&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)line;
	params[1] = (intptr_t)&key;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)&category;
	params[4] = (intptr_t)&comment;
	params[5] = (intptr_t)&termType;
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
mscorlib::System::String* Assembly_CSharp::I2::Loc::LocalizationReader::ReadCSVfile(mscorlib::System::String* Path, mscorlib::System::Text::Encoding* encoding)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadCSVfile", std::vector<std::string> { "System.String", "System.Text.Encoding" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Path;
	params[1] = (intptr_t)encoding;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* Assembly_CSharp::I2::Loc::LocalizationReader::ReadCSV(mscorlib::System::String* Text, wchar_t Separator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadCSV", std::vector<std::string> { "System.String", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)Text;
	params[1] = (intptr_t)&Separator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>*)returnValue;
}
IL2CPP::Array<mscorlib::System::String*>* Assembly_CSharp::I2::Loc::LocalizationReader::ParseCSVline(mscorlib::System::String* Line, int32_t& iStart, wchar_t Separator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ParseCSVline", std::vector<std::string> { "System.String", "System.Int32&", "System.Char" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)Line;
	params[1] = (intptr_t)&iStart;
	params[2] = (intptr_t)&Separator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
}
void Assembly_CSharp::I2::Loc::LocalizationReader::AddCSVtoken(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>& list, mscorlib::System::String& Line, int32_t iEnd, int32_t& iWordStart)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddCSVtoken", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>&", "System.String&", "System.Int32", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&list;
	params[1] = (intptr_t)&Line;
	params[2] = (intptr_t)&iEnd;
	params[3] = (intptr_t)&iWordStart;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>* Assembly_CSharp::I2::Loc::LocalizationReader::ReadI2CSV(mscorlib::System::String* Text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadI2CSV", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)Text;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::String*>>*)returnValue;
}
void Assembly_CSharp::I2::Loc::LocalizationReader::ValidateFullTerm(mscorlib::System::String& Term)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateFullTerm", std::vector<std::string> { "System.String&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&Term;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LocalizationReader::EncodeString(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::LocalizationReader::DecodeString(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::I2::Loc::LocalizationReader::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
