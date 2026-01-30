#include "Rewired_Utils_CollectionTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::CollectionTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "CollectionTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::CollectionTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::Utils::CollectionTools::GetDictionaryValueSafe(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, mscorlib::System::String* key, mscorlib::System::Type* type, mscorlib::System::Object& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDictionaryValueSafe", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String", "System.Type", "System.Object&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)dictionary;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Utils::CollectionTools::GetDictionaryValueSafe_float(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, mscorlib::System::String* key, float& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDictionaryValueSafe_float", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dictionary;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)&value;
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
bool Rewired_Core::Rewired::Utils::CollectionTools::GetDictionaryValueSafe_int(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dictionary, mscorlib::System::String* key, int32_t& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDictionaryValueSafe_int", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String", "System.Int32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dictionary;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)&value;
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
void Rewired_Core::Rewired::Utils::CollectionTools::AddValueSafe(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* data, mscorlib::System::String* key, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddValueSafe", std::vector<std::string> { "System.Collections.Generic.Dictionary`2<System.String,System.Object>", "System.String", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)data;
	params[1] = (intptr_t)key;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
