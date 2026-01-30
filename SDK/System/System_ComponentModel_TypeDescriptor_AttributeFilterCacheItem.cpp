#include "System_ComponentModel_TypeDescriptor_AttributeFilterCacheItem.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::TypeDescriptor::GetIl2CppClass(), "AttributeFilterCacheItem");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor(IL2CPP::Array<mscorlib::System::Attribute*>* filter, mscorlib::System::Collections::ICollection* filteredMembers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Attribute[]", "System.Collections.ICollection" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)filter;
	params[1] = (intptr_t)filteredMembers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid(IL2CPP::Array<mscorlib::System::Attribute*>* filter)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsValid", std::vector<std::string> { "System.Attribute[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)filter;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
