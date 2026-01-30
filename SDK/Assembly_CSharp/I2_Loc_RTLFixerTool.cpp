#include "I2_Loc_RTLFixerTool.h"

IL2CPP::Il2CppClass* Assembly_CSharp::I2::Loc::RTLFixerTool::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "I2.Loc", "RTLFixerTool");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::I2::Loc::RTLFixerTool::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::RTLFixerTool::RemoveTashkeel(mscorlib::System::String* str, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TashkeelLocation>& tashkeelLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveTashkeel", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<I2.Loc.TashkeelLocation>&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)str;
	params[1] = (intptr_t)&tashkeelLocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
IL2CPP::Array<wchar_t>* Assembly_CSharp::I2::Loc::RTLFixerTool::ReturnTashkeel(IL2CPP::Array<wchar_t>* letters, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::TashkeelLocation>* tashkeelLocation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReturnTashkeel", std::vector<std::string> { "System.Char[]", "System.Collections.Generic.List`1<I2.Loc.TashkeelLocation>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)letters;
	params[1] = (intptr_t)tashkeelLocation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<wchar_t>*)returnValue;
}
mscorlib::System::String* Assembly_CSharp::I2::Loc::RTLFixerTool::FixLine(mscorlib::System::String* str)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixLine", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)str;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Assembly_CSharp::I2::Loc::RTLFixerTool::IsIgnoredCharacter(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsIgnoredCharacter", std::vector<std::string> { "System.Char" });
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
bool Assembly_CSharp::I2::Loc::RTLFixerTool::IsLeadingLetter(IL2CPP::Array<wchar_t>* letters, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsLeadingLetter", std::vector<std::string> { "System.Char[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)letters;
	params[1] = (intptr_t)&index;
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
bool Assembly_CSharp::I2::Loc::RTLFixerTool::IsFinishingLetter(IL2CPP::Array<wchar_t>* letters, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsFinishingLetter", std::vector<std::string> { "System.Char[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)letters;
	params[1] = (intptr_t)&index;
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
bool Assembly_CSharp::I2::Loc::RTLFixerTool::IsMiddleLetter(IL2CPP::Array<wchar_t>* letters, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMiddleLetter", std::vector<std::string> { "System.Char[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)letters;
	params[1] = (intptr_t)&index;
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
void Assembly_CSharp::I2::Loc::RTLFixerTool::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::I2::Loc::RTLFixerTool::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
