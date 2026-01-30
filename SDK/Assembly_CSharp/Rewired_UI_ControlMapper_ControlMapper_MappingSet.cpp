#include "Rewired_UI_ControlMapper_ControlMapper_MappingSet.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper::GetIl2CppClass(), "MappingSet");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_mapCategoryId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mapCategoryId");
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
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_actionListMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionListMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode));
		return ret;
	}
	return static_cast<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode>(*(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_actionCategoryIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionCategoryIds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_actionIds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_actionIds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>*)returnValue;
}
bool Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_isValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isValid");
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
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::_ctor(int32_t mapCategoryId, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode actionListMode, IL2CPP::Array<int32_t>* actionCategoryIds, IL2CPP::Array<int32_t>* actionIds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "Rewired.UI.ControlMapper.ControlMapper/MappingSet/ActionListMode", "System.Int32[]", "System.Int32[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&actionListMode;
	params[2] = (intptr_t)actionCategoryIds;
	params[3] = (intptr_t)actionIds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet::get_Default()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Default");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet*)returnValue;
}
