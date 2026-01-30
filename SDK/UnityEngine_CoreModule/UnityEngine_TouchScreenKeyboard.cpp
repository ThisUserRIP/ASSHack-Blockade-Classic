#include "UnityEngine_TouchScreenKeyboard.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "TouchScreenKeyboard");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::Internal_Destroy(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::Destroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Destroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::_ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, mscorlib::System::String* textPlaceholder, int32_t characterLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "UnityEngine.TouchScreenKeyboardType", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&keyboardType;
	params[2] = (intptr_t)&autocorrection;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&secure;
	params[5] = (intptr_t)&alert;
	params[6] = (intptr_t)textPlaceholder;
	params[7] = (intptr_t)&characterLimit;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& arguments, mscorlib::System::String* text, mscorlib::System::String* textPlaceholder)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TouchScreenKeyboard_InternalConstructorHelper", std::vector<std::string> { "UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&arguments;
	params[1] = (intptr_t)text;
	params[2] = (intptr_t)textPlaceholder;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_isSupported()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isSupported");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_isInPlaceEditingAllowed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isInPlaceEditingAllowed");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::Open(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, mscorlib::System::String* textPlaceholder, int32_t characterLimit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Open", std::vector<std::string> { "System.String", "UnityEngine.TouchScreenKeyboardType", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&keyboardType;
	params[2] = (intptr_t)&autocorrection;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&secure;
	params[5] = (intptr_t)&alert;
	params[6] = (intptr_t)textPlaceholder;
	params[7] = (intptr_t)&characterLimit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::Open(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Open", std::vector<std::string> { "System.String", "UnityEngine.TouchScreenKeyboardType", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&keyboardType;
	params[2] = (intptr_t)&autocorrection;
	params[3] = (intptr_t)&multiline;
	params[4] = (intptr_t)&secure;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard*)returnValue;
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_text()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_text");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::set_text(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_text", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::set_hideInput(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hideInput", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_active()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_active");
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
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::set_active(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_active", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_status()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_status");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status>(*(UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::set_characterLimit(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_characterLimit", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_canGetSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_canGetSelection");
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
bool UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_canSetSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_canSetSelection");
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
UnityEngine_CoreModule::UnityEngine::RangeInt UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::get_selection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_selection");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::RangeInt ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::RangeInt));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::RangeInt>(*(UnityEngine_CoreModule::UnityEngine::RangeInt*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::set_selection(UnityEngine_CoreModule::UnityEngine::RangeInt value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_selection", std::vector<std::string> { "UnityEngine.RangeInt" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::GetSelection(int32_t& start, int32_t& length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSelection", std::vector<std::string> { "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard::SetSelection(int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSelection", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&start;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
