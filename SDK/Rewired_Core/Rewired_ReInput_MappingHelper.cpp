#include "Rewired_ReInput_MappingHelper.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ReInput_MappingHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ReInput::GetIl2CppClass(), "MappingHelper");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ReInput_MappingHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Rewired_Core::Rewired::ReInput_MappingHelper* Rewired_Core::Rewired::ReInput_MappingHelper::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ReInput_MappingHelper*)returnValue;
}
void Rewired_Core::Rewired::ReInput_MappingHelper::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputMapCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::get_MapCategories()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MapCategories");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputMapCategory>*)returnValue;
}
Rewired_Core::Rewired::InputMapCategory* Rewired_Core::Rewired::ReInput_MappingHelper::GetMapCategory(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputMapCategory*)returnValue;
}
Rewired_Core::Rewired::InputMapCategory* Rewired_Core::Rewired::ReInput_MappingHelper::GetMapCategory(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputMapCategory*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetMapCategoryId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapCategoryId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::MapCategoriesWithTag(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MapCategoriesWithTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::get_UserAssignableMapCategories()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserAssignableMapCategories");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableMapCategoriesWithTag(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableMapCategoriesWithTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputMapCategory>*)returnValue;
}
bool Rewired_Core::Rewired::ReInput_MappingHelper::IsMapCategoryUserAssignable(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsMapCategoryUserAssignable", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
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
Rewired_Core::Rewired::InputCategory* Rewired_Core::Rewired::ReInput_MappingHelper::GetActionCategory(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputCategory*)returnValue;
}
Rewired_Core::Rewired::InputCategory* Rewired_Core::Rewired::ReInput_MappingHelper::GetActionCategory(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputCategory*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetActionCategoryId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionCategoryId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::get_ActionCategories()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActionCategories");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputCategory>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionCategoriesWithTag(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionCategoriesWithTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::get_UserAssignableActionCategories()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserAssignableActionCategories");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableActionCategoriesWithTag(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableActionCategoriesWithTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputCategory>*)returnValue;
}
bool Rewired_Core::Rewired::ReInput_MappingHelper::IsActionCategoryUserAssignable(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsActionCategoryUserAssignable", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
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
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLayout", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetLayout(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLayout", std::vector<std::string> { "Rewired.ControllerType", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetLayoutId(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLayoutId", std::vector<std::string> { "Rewired.ControllerType", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)name;
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
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickLayout(int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickLayout", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickLayout(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickLayout", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickLayoutId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickLayoutId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardLayout(int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardLayout", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardLayout(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardLayout", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardLayoutId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardLayoutId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseLayout(int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseLayout", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseLayout(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseLayout", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseLayoutId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseLayoutId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerLayout(int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerLayout", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
Rewired_Core::Rewired::InputLayout* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerLayout(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerLayout", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputLayout*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerLayoutId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerLayoutId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* Rewired_Core::Rewired::ReInput_MappingHelper::MapLayouts(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MapLayouts", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* Rewired_Core::Rewired::ReInput_MappingHelper::get_JoystickLayouts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_JoystickLayouts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* Rewired_Core::Rewired::ReInput_MappingHelper::get_KeyboardLayouts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_KeyboardLayouts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* Rewired_Core::Rewired::ReInput_MappingHelper::get_MouseLayouts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MouseLayouts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>* Rewired_Core::Rewired::ReInput_MappingHelper::get_CustomControllerLayouts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CustomControllerLayouts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputLayout>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::get_Actions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Actions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
Rewired_Core::Rewired::InputAction* Rewired_Core::Rewired::ReInput_MappingHelper::GetAction(int32_t actionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAction", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&actionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputAction*)returnValue;
}
Rewired_Core::Rewired::InputAction* Rewired_Core::Rewired::ReInput_MappingHelper::GetAction(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAction", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputAction*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetActionId(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::get_UserAssignableActions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UserAssignableActions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionsInCategory(mscorlib::System::String* mapCategoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionsInCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mapCategoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionsInCategory(mscorlib::System::String* mapCategoryName, bool sort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionsInCategory", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapCategoryName;
	params[1] = (intptr_t)&sort;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionsInCategory(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionsInCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionsInCategory(int32_t mapCategoryId, bool sort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionsInCategory", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&sort;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::ActionsInCategoriesWithTag(mscorlib::System::String* tag)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActionsInCategoriesWithTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tag;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableActionsInCategory(int32_t mapCategoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableActionsInCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapCategoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableActionsInCategory(int32_t mapCategoryId, bool sort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableActionsInCategory", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&sort;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableActionsInCategory(mscorlib::System::String* mapCategoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableActionsInCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mapCategoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>* Rewired_Core::Rewired::ReInput_MappingHelper::UserAssignableActionsInCategory(mscorlib::System::String* mapCategoryName, bool sort)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserAssignableActionsInCategory", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapCategoryName;
	params[1] = (intptr_t)&sort;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::InputAction>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* Rewired_Core::Rewired::ReInput_MappingHelper::GetInputBehaviors(int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehaviors", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* Rewired_Core::Rewired::ReInput_MappingHelper::GetSystemPlayerInputBehaviors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemPlayerInputBehaviors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::GetInputBehavior(int32_t playerId, int32_t behaviorId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehavior", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&behaviorId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::GetInputBehavior(int32_t playerId, mscorlib::System::String* behaviorName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehavior", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)behaviorName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::GetSystemPlayerInputBehavior(int32_t behaviorId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemPlayerInputBehavior", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&behaviorId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::GetSystemPlayerInputBehavior(mscorlib::System::String* behaviorName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSystemPlayerInputBehavior", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)behaviorName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
int32_t Rewired_Core::Rewired::ReInput_MappingHelper::GetInputBehaviorId(mscorlib::System::String* behaviorName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehaviorId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)behaviorName;
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
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::skqOJGkcOGMmiwzhkjzKjcDIOEu(int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "skqOJGkcOGMmiwzhkjzKjcDIOEu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::ReInput_MappingHelper::skqOJGkcOGMmiwzhkjzKjcDIOEu(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "skqOJGkcOGMmiwzhkjzKjcDIOEu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMap(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetActionElementMap(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActionElementMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstance(Rewired_Core::Rewired::Controller* controller, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstance", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstance(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstance", std::vector<std::string> { "Rewired.Controller", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(Rewired_Core::Rewired::Joystick* joystick, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "Rewired.Joystick", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)joystick;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(Rewired_Core::Rewired::Joystick* joystick, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "Rewired.Joystick", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)joystick;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(mscorlib::System::Guid joystickTypeGuid, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "System.Guid", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&joystickTypeGuid;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(mscorlib::System::Guid joystickTypeGuid, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "System.Guid", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&joystickTypeGuid;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardMapInstance(int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardMapInstance", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardMapInstance(mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardMapInstance", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapCategoryName;
	params[1] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
Rewired_Core::Rewired::MouseMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseMapInstance(int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseMapInstance", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&mapCategoryId;
	params[1] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::MouseMap*)returnValue;
}
Rewired_Core::Rewired::MouseMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseMapInstance(mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseMapInstance", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mapCategoryName;
	params[1] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::MouseMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstance(Rewired_Core::Rewired::CustomController* customController, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstance", std::vector<std::string> { "Rewired.CustomController", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)customController;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstance(Rewired_Core::Rewired::CustomController* customController, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstance", std::vector<std::string> { "Rewired.CustomController", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)customController;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstance(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstance", std::vector<std::string> { "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerIdentifier;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Controller* controller, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.Controller", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.Controller", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Joystick* joystick, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.Joystick", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)joystick;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::Joystick* joystick, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.Joystick", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)joystick;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::JoystickMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetJoystickMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoystickMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::JoystickMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::CustomController* customController, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.CustomController", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)customController;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::CustomController* customController, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.CustomController", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)customController;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)&mapCategoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::CustomControllerMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetCustomControllerMapInstanceSavedOrDefault(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomControllerMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "Rewired.ControllerIdentifier", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&controllerIdentifier;
	params[2] = (intptr_t)mapCategoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::CustomControllerMap*)returnValue;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardMapInstanceSavedOrDefault(int32_t playerId, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
Rewired_Core::Rewired::KeyboardMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetKeyboardMapInstanceSavedOrDefault(int32_t playerId, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyboardMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::KeyboardMap*)returnValue;
}
Rewired_Core::Rewired::MouseMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseMapInstanceSavedOrDefault(int32_t playerId, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::MouseMap*)returnValue;
}
Rewired_Core::Rewired::MouseMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetMouseMapInstanceSavedOrDefault(int32_t playerId, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseMapInstanceSavedOrDefault", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::MouseMap*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::ReInput_MappingHelper::GetFirstJoystickTemplateElementIdentifier(Rewired_Core::Rewired::Joystick* joystick, int32_t joystickElementIdentifierId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstJoystickTemplateElementIdentifier", std::vector<std::string> { "Rewired.Joystick", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)joystick;
	params[1] = (intptr_t)&joystickElementIdentifierId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerElementIdentifier* Rewired_Core::Rewired::ReInput_MappingHelper::UoGAUvRQFvakkjSBnCcWcYgbmVC(mscorlib::System::Guid A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UoGAUvRQFvakkjSBnCcWcYgbmVC");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerElementIdentifier*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerTemplateMapInstance(mscorlib::System::Guid templateTypeGuid, int32_t mapCategoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerTemplateMapInstance", std::vector<std::string> { "System.Guid", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&templateTypeGuid;
	params[1] = (intptr_t)&mapCategoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerTemplateMap* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerTemplateMapInstance(mscorlib::System::Guid templateTypeGuid, mscorlib::System::String* mapCategoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerTemplateMapInstance", std::vector<std::string> { "System.Guid", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&templateTypeGuid;
	params[1] = (intptr_t)mapCategoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerTemplateMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapLayoutManagerRuleSetInstance(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapLayoutManagerRuleSetInstance", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet*)returnValue;
}
Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapLayoutManagerRuleSetInstance(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapLayoutManagerRuleSetInstance", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet*)returnValue;
}
Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapEnablerRuleSetInstance(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapEnablerRuleSetInstance", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapEnabler_RuleSet*)returnValue;
}
Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* Rewired_Core::Rewired::ReInput_MappingHelper::GetControllerMapEnablerRuleSetInstance(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerMapEnablerRuleSetInstance", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapEnabler_RuleSet*)returnValue;
}
