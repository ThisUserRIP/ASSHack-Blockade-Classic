#include "System_Attribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Attribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Attribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Attribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<mscorlib::System::Attribute*>* mscorlib::System::Attribute::InternalGetCustomAttributes(mscorlib::System::Reflection::PropertyInfo* element, mscorlib::System::Type* type, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetCustomAttributes", std::vector<std::string> { "System.Reflection.PropertyInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Attribute*>* mscorlib::System::Attribute::InternalGetCustomAttributes(mscorlib::System::Reflection::EventInfo* element, mscorlib::System::Type* type, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalGetCustomAttributes", std::vector<std::string> { "System.Reflection.EventInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
bool mscorlib::System::Attribute::InternalIsDefined(mscorlib::System::Reflection::PropertyInfo* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalIsDefined", std::vector<std::string> { "System.Reflection.PropertyInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
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
bool mscorlib::System::Attribute::InternalIsDefined(mscorlib::System::Reflection::EventInfo* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalIsDefined", std::vector<std::string> { "System.Reflection.EventInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
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
IL2CPP::Array<mscorlib::System::Attribute*>* mscorlib::System::Attribute::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* type, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)type;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
bool mscorlib::System::Attribute::IsDefined(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
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
bool mscorlib::System::Attribute::IsDefined(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefined", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
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
mscorlib::System::Attribute* mscorlib::System::Attribute::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
mscorlib::System::Attribute* mscorlib::System::Attribute::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.MemberInfo", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
IL2CPP::Array<mscorlib::System::Attribute*>* mscorlib::System::Attribute::GetCustomAttributes(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributes", std::vector<std::string> { "System.Reflection.Assembly", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Attribute*>*)returnValue;
}
mscorlib::System::Attribute* mscorlib::System::Attribute::GetCustomAttribute(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.Assembly", "System.Type" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
mscorlib::System::Attribute* mscorlib::System::Attribute::GetCustomAttribute(mscorlib::System::Reflection::Assembly* element, mscorlib::System::Type* attributeType, bool inherit)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttribute", std::vector<std::string> { "System.Reflection.Assembly", "System.Type", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)element;
	params[1] = (intptr_t)attributeType;
	params[2] = (intptr_t)&inherit;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Attribute*)returnValue;
}
void mscorlib::System::Attribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Attribute::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Attribute::AreFieldValuesEqual(mscorlib::System::Object* thisValue, mscorlib::System::Object* thatValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AreFieldValuesEqual", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)thisValue;
	params[1] = (intptr_t)thatValue;
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
int32_t mscorlib::System::Attribute::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Object* mscorlib::System::Attribute::get_TypeId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TypeId");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
bool mscorlib::System::Attribute::Match(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Match", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool mscorlib::System::Attribute::IsDefaultAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefaultAttribute");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
