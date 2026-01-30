#include "System_MonoCustomAttrs.h"

IL2CPP::Il2CppClass* mscorlib::System::MonoCustomAttrs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "MonoCustomAttrs");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::MonoCustomAttrs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::MonoCustomAttrs::IsUserCattrProvider(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsUserCattrProvider", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetCustomAttributesInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool pseudoAttrs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributesInternal", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&pseudoAttrs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetPseudoCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPseudoCustomAttributes", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetPseudoCustomAttributes(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPseudoCustomAttributes", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetCustomAttributesBase(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inheritedOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributesBase", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inheritedOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Object*>* mscorlib::System::MonoCustomAttrs::GetCustomAttributes(mscorlib::System::Reflection::ICustomAttributeProvider* obj, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Object*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Reflection::CustomAttributeData*>* mscorlib::System::MonoCustomAttrs::GetCustomAttributesDataInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributesDataInternal", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Reflection::CustomAttributeData*>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* mscorlib::System::MonoCustomAttrs::GetCustomAttributesData(mscorlib::System::Reflection::ICustomAttributeProvider* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributesData", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>*)returnValue;
}
bool mscorlib::System::MonoCustomAttrs::IsDefined(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
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
bool mscorlib::System::MonoCustomAttrs::IsDefinedInternal(mscorlib::System::Reflection::ICustomAttributeProvider* obj, mscorlib::System::Type* AttributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefinedInternal", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)AttributeType;
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
mscorlib::System::Reflection::PropertyInfo* mscorlib::System::MonoCustomAttrs::GetBasePropertyDefinition(mscorlib::System::Reflection::MonoProperty* property)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBasePropertyDefinition", std::vector<std::string> { "System.Reflection.MonoProperty" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)property;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::PropertyInfo*)returnValue;
}
mscorlib::System::Reflection::EventInfo* mscorlib::System::MonoCustomAttrs::GetBaseEventDefinition(mscorlib::System::Reflection::MonoEvent* evt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBaseEventDefinition", std::vector<std::string> { "System.Reflection.MonoEvent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)evt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::EventInfo*)returnValue;
}
mscorlib::System::Reflection::ICustomAttributeProvider* mscorlib::System::MonoCustomAttrs::GetBase(mscorlib::System::Reflection::ICustomAttributeProvider* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBase", std::vector<std::string> { "System.Reflection.ICustomAttributeProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Reflection::ICustomAttributeProvider*)returnValue;
}
mscorlib::System::AttributeUsageAttribute* mscorlib::System::MonoCustomAttrs::RetrieveAttributeUsageNoCache(mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RetrieveAttributeUsageNoCache", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::AttributeUsageAttribute*)returnValue;
}
mscorlib::System::AttributeUsageAttribute* mscorlib::System::MonoCustomAttrs::RetrieveAttributeUsage(mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RetrieveAttributeUsage", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::AttributeUsageAttribute*)returnValue;
}
void mscorlib::System::MonoCustomAttrs::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
