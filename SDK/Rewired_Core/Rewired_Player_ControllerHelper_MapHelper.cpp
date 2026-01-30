#include "Rewired_Player_ControllerHelper_MapHelper.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Player_ControllerHelper::GetIl2CppClass(), "MapHelper");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::_ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::Player_ControllerHelper* parent, Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR* startingControllerMapInfo, Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings* controllerMapLayoutManagerSettings, Rewired_Core::Rewired::ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds* controllerMapEnablerSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Player", "Rewired.Player/ControllerHelper", "mUbbinbjQOMNIAzUbOrfgDmjOhKR", "Rewired.ControllerMapLayoutManager/StartingSettings", "Rewired.ControllerMapEnabler/wHqkuIoGNdizXgXEUBaCAAvdFEds" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)player;
	params[1] = (intptr_t)parent;
	params[2] = (intptr_t)startingControllerMapInfo;
	params[3] = (intptr_t)controllerMapLayoutManagerSettings;
	params[4] = (intptr_t)controllerMapEnablerSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerMapLayoutManager* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::get_layoutManager()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_layoutManager");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapLayoutManager*)returnValue;
}
Rewired_Core::Rewired::ControllerMapEnabler* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::get_mapEnabler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mapEnabler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMapEnabler*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId, bool startEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
	params[4] = (intptr_t)&startEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool startEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
	params[4] = (intptr_t)&startEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::IKrWTsyIupuadXOTRfKZsAuDblA(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4, Rewired_Core::Rewired::BoolOption A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IKrWTsyIupuadXOTRfKZsAuDblA");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::IKrWTsyIupuadXOTRfKZsAuDblA(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4, Rewired_Core::Rewired::BoolOption A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IKrWTsyIupuadXOTRfKZsAuDblA");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMaps()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps", std::vector<std::string> { "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMaps(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMaps(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps", std::vector<std::string> { "Rewired.ControllerType", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)categoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&categoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(mscorlib::System::String* categoryName, Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String", "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)categoryName;
	params[1] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(int32_t categoryId, Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32", "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&categoryId;
	params[1] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)categoryName;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&categoryId;
	params[1] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(mscorlib::System::String* categoryName, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String", "Rewired.ControllerType", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)categoryName;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapsInCategory(int32_t categoryId, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32", "Rewired.ControllerType", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&categoryId;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMaps(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaps", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMaps(Rewired_Core::Rewired::Controller* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaps", std::vector<std::string> { "Rewired.Controller" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)controller;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.Controller", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&categoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.Controller", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)categoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Collections.Generic.List`1<Rewired.ControllerMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)categoryName;
	params[2] = (intptr_t)results;
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
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(int32_t mapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t mapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&mapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::Controller* controller, int32_t mapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.Controller", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&mapId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::Controller* controller, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMap(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "Rewired.Controller", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)categoryName;
	params[2] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstMapInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "Rewired.Controller", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)categoryName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstMapInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "Rewired.Controller", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&categoryId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMap(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* map)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "Rewired.Controller", "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)map;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)map;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMap(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* map, bool startEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "Rewired.Controller", "Rewired.ControllerMap", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)map;
	params[2] = (intptr_t)&startEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map, bool startEnabled)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "Rewired.ControllerMap", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)map;
	params[3] = (intptr_t)&startEnabled;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMapFromXml(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* xmlString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapFromXml", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)xmlString;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMapsFromXml(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* xmlStrings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapsFromXml", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)xmlStrings;
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
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMapFromJson(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* jsonString)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapFromJson", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)jsonString;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddMapsFromJson(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* jsonStrings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapsFromJson", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Collections.Generic.List`1<System.String>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)jsonStrings;
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
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddEmptyMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEmptyMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AddEmptyMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEmptyMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t mapId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&mapId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMaps(Rewired_Core::Rewired::ControllerType controllerType, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMaps", std::vector<std::string> { "Rewired.ControllerType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(int32_t categoryId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&categoryId;
	params[1] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(mscorlib::System::String* categoryName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)categoryName;
	params[1] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)categoryName;
	params[2] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, int32_t layoutId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&categoryId;
	params[2] = (intptr_t)&layoutId;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)categoryName;
	params[2] = (intptr_t)layoutName;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t layoutId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInLayout", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&layoutId;
	params[2] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsInLayout(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* layoutName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInLayout", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)layoutName;
	params[2] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsForControllerInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t layoutId, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForControllerInLayout", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&layoutId;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearMapsForControllerInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* layoutName, bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForControllerInLayout", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)layoutName;
	params[3] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ClearAllMaps(bool userAssignableOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAllMaps", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&userAssignableOnly;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstButtonMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstButtonMapWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetButtonMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstAxisMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstAxisMapWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::AxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AxisMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAxisMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&actionId;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)actionName;
	params[3] = (intptr_t)&skipDisabledMaps;
	params[4] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.Controller", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)controller;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "Rewired.ControllerType", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&actionId;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithAction", std::vector<std::string> { "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)actionName;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstElementMapWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&skipDisabledMaps;
	params[2] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.ControllerElementTarget", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.Int32", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)&actionId;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementMapsWithElementTarget", std::vector<std::string> { "Rewired.IControllerElementTarget", "System.String", "System.Boolean", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)elementTarget;
	params[1] = (intptr_t)actionName;
	params[2] = (intptr_t)&skipDisabledMaps;
	params[3] = (intptr_t)results;
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
IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetMapSaveData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, bool userAssignableMapsOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapSaveData", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&controllerId;
	params[2] = (intptr_t)&userAssignableMapsOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapSaveData(Rewired_Core::Rewired::ControllerType controllerType, bool userAssignableMapsOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapSaveData", std::vector<std::string> { "Rewired.ControllerType", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&userAssignableMapsOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetAllMapSaveData(bool userAssignableMapsOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapSaveData", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&userAssignableMapsOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetAllMapsEnabled(bool state)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllMapsEnabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&state;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetAllMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetAllMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.Controller" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)controller;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetAllMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAllMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&controllerId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&categoryId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)categoryName;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)categoryName;
	params[2] = (intptr_t)layoutName;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&categoryId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)categoryName;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.ControllerType", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&controllerType;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.Controller", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)&categoryId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, int32_t categoryId, int32_t layoutId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.Controller", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)&categoryId;
	params[3] = (intptr_t)&layoutId;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.Controller", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)categoryName;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMapsEnabled", std::vector<std::string> { "System.Boolean", "Rewired.Controller", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)controller;
	params[2] = (intptr_t)categoryName;
	params[3] = (intptr_t)layoutName;
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
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LoadDefaultMaps(Rewired_Core::Rewired::ControllerType controllerType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadDefaultMaps", std::vector<std::string> { "Rewired.ControllerType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&controllerType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ContainsMapInCategory(Rewired_Core::Rewired::InputMapCategory* category)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsMapInCategory", std::vector<std::string> { "Rewired.InputMapCategory" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)category;
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
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ContainsMapInCategory(int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsMapInCategory", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&categoryId;
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
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ContainsMapInCategory(mscorlib::System::String* categoryName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsMapInCategory", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)categoryName;
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
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ContainsMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ContainsMapInCategory", std::vector<std::string> { "Rewired.ControllerType", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&controllerType;
	params[1] = (intptr_t)&categoryId;
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
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::get_InputBehaviors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InputBehaviors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetInputBehavior(int32_t behaviorId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehavior", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&behaviorId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
Rewired_Core::Rewired::InputBehavior* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::GetInputBehavior(mscorlib::System::String* behaviorName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInputBehavior", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)behaviorName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::InputBehavior*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::pKLNoWCgVUqlRfCsOXaDmHUNbICB()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pKLNoWCgVUqlRfCsOXaDmHUNbICB");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::UFGekIJnsUAEDIMyARHumOSXWzG(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UFGekIJnsUAEDIMyARHumOSXWzG");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::kzhOtKCVbsTbYXFSwaOVYVPkUua(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kzhOtKCVbsTbYXFSwaOVYVPkUua");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::nDsKFCNOFoaBQbrKaLFNnRmYliPC(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "nDsKFCNOFoaBQbrKaLFNnRmYliPC");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::CdgOeyFDQQaURAtXLnfDGSscXlfl(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CdgOeyFDQQaURAtXLnfDGSscXlfl");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::xmmJXbxWBpqxqFQoGGEghHZgEEt(Rewired_Core::Rewired::Joystick* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xmmJXbxWBpqxqFQoGGEghHZgEEt");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HlqfMvClTHRWQTvDtQbnuOMcGCD(Rewired_Core::Rewired::Joystick* A_1, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>* A_2, Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HlqfMvClTHRWQTvDtQbnuOMcGCD");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::CustomControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::czfhyoJVuNkXEfoXmBTNKebCGXG(Rewired_Core::Rewired::CustomController* A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "czfhyoJVuNkXEfoXmBTNKebCGXG");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::CustomControllerMap>*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::LcGLWizcLlknBEsvDyaPiPkfGSu(Rewired_Core::Rewired::CustomController* A_1, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::CustomControllerMap>* A_2, Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LcGLWizcLlknBEsvDyaPiPkfGSu");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::jJZfFxXXoleYVsgxcuZeaYAuMEk(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jJZfFxXXoleYVsgxcuZeaYAuMEk");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::BRffQAcaZfKRnLUhLQHBZQnzxTt(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BRffQAcaZfKRnLUhLQHBZQnzxTt");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::BRffQAcaZfKRnLUhLQHBZQnzxTt(Rewired_Core::Rewired::Controller* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BRffQAcaZfKRnLUhLQHBZQnzxTt");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4, Rewired_Core::Rewired::BoolOption A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3, Rewired_Core::Rewired::BoolOption A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4, Rewired_Core::Rewired::BoolOption A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3, Rewired_Core::Rewired::BoolOption A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HWliegiTytEdMKscITjuZFUIUwc");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::MSZlPVEeYNbwVPkxTZXNShnHikO(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2, Rewired_Core::Rewired::BoolOption A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MSZlPVEeYNbwVPkxTZXNShnHikO");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::MSZlPVEeYNbwVPkxTZXNShnHikO(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, Rewired_Core::Rewired::ControllerMap* A_3, Rewired_Core::Rewired::BoolOption A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MSZlPVEeYNbwVPkxTZXNShnHikO");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HadpDEAFGdERATBkYNpHiugUBEP(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HadpDEAFGdERATBkYNpHiugUBEP");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::fbKDZUzXLkXBKLrXitKNFMdxXcx(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "fbKDZUzXLkXBKLrXitKNFMdxXcx");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
bool Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::OyMiwIkyyUkMbkivMeCHhnfKTyb(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OyMiwIkyyUkMbkivMeCHhnfKTyb");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::zxyyQoTslBDoVjNdpywZCxCQJQo(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zxyyQoTslBDoVjNdpywZCxCQJQo");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "raqYxuHgEuDWUyudnKUDJlSanQS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "raqYxuHgEuDWUyudnKUDJlSanQS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "raqYxuHgEuDWUyudnKUDJlSanQS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "raqYxuHgEuDWUyudnKUDJlSanQS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, Rewired_Core::Rewired::ControllerMap* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DzdezaXxJsalGxZqAPptPgaqDPS");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YIyVRucimZzkWXfxuwMOsilvaRfE");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TLvqPELxMsUEHJmVDvkWaReKby");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::Controller* A_1, int32_t A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TLvqPELxMsUEHJmVDvkWaReKby");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TLvqPELxMsUEHJmVDvkWaReKby");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
Rewired_Core::Rewired::ControllerMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TLvqPELxMsUEHJmVDvkWaReKby");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ControllerMap*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerMap*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::dJdVZJmwFgsUpkypGIdtjOxDXud(Rewired_Core::Rewired::ControllerType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dJdVZJmwFgsUpkypGIdtjOxDXud");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMap*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::vmXpGuVEcIiguvWoSDzNDQEZcQz(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vmXpGuVEcIiguvWoSDzNDQEZcQz");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>*)returnValue;
}
IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::zYTmJsWKwSVNFHlCuepIPrfrZPI(Rewired_Core::Rewired::ControllerType A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zYTmJsWKwSVNFHlCuepIPrfrZPI");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WWYGgareYqKtPkItghwilmdeZpy");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WWYGgareYqKtPkItghwilmdeZpy");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WWYGgareYqKtPkItghwilmdeZpy");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)A_4;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WWYGgareYqKtPkItghwilmdeZpy");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)A_3;
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
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::bKWBogKmADXqVMSoQMEpHdAAhBF(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bKWBogKmADXqVMSoQMEpHdAAhBF");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SzWZWxhYRHeBlRgfXLEdnXSnwjv");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SzWZWxhYRHeBlRgfXLEdnXSnwjv");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cNEbfcGlqtniFgCASaoMCvhFqcLL");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cNEbfcGlqtniFgCASaoMCvhFqcLL");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QtGVMwsaqYAYLpCmJHrDtEVRhNZ");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QtGVMwsaqYAYLpCmJHrDtEVRhNZ");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hsbdZUUeiiGtANwiaysKJecWjdq");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hsbdZUUeiiGtANwiaysKJecWjdq");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YykMKZGZdZNaEFacNMRyQbLrMVl");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YykMKZGZdZNaEFacNMRyQbLrMVl");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "treCDMOXcXHxgTgHKiFaHjRIXbv");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "treCDMOXcXHxgTgHKiFaHjRIXbv");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::PhvjWzVlndcjGaWuuNXNcJAUJVw(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PhvjWzVlndcjGaWuuNXNcJAUJVw");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::HhTPZpqHEqCaPgxuKyUaIZmjJQS(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HhTPZpqHEqCaPgxuKyUaIZmjJQS");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::kHBiXVfNdxECkHbVXxCMinXJVpV(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kHBiXVfNdxECkHbVXxCMinXJVpV");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qZZvLpqPhQMNbadGuProGPCsfGN");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qZZvLpqPhQMNbadGuProGPCsfGN");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZbVAgtFgFQKgLEoFXuFOSuzwfsZ");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZbVAgtFgFQKgLEoFXuFOSuzwfsZ");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DPJJGDqnDXiINfRjAuXGgmuDQFiL");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DPJJGDqnDXiINfRjAuXGgmuDQFiL");
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)A_4;
	params[4] = (intptr_t)&A_5;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SzWZWxhYRHeBlRgfXLEdnXSnwjv");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SzWZWxhYRHeBlRgfXLEdnXSnwjv");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cNEbfcGlqtniFgCASaoMCvhFqcLL");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cNEbfcGlqtniFgCASaoMCvhFqcLL");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QtGVMwsaqYAYLpCmJHrDtEVRhNZ");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QtGVMwsaqYAYLpCmJHrDtEVRhNZ");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hsbdZUUeiiGtANwiaysKJecWjdq");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hsbdZUUeiiGtANwiaysKJecWjdq");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YykMKZGZdZNaEFacNMRyQbLrMVl");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YykMKZGZdZNaEFacNMRyQbLrMVl");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "treCDMOXcXHxgTgHKiFaHjRIXbv");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "treCDMOXcXHxgTgHKiFaHjRIXbv");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qZZvLpqPhQMNbadGuProGPCsfGN");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qZZvLpqPhQMNbadGuProGPCsfGN");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZbVAgtFgFQKgLEoFXuFOSuzwfsZ");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZbVAgtFgFQKgLEoFXuFOSuzwfsZ");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DPJJGDqnDXiINfRjAuXGgmuDQFiL");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DPJJGDqnDXiINfRjAuXGgmuDQFiL");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
Rewired_Core::Rewired::ActionElementMap* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::WBzDGxkJTWyXtTxvxQlcjXsJkOq(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WBzDGxkJTWyXtTxvxQlcjXsJkOq");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::ActionElementMap*)returnValue;
}
mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::pSoToZtjdOeWvhYrvSSNhSdoxAma(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pSoToZtjdOeWvhYrvSSNhSdoxAma");
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>*)returnValue;
}
int32_t Rewired_Core::Rewired::Player_ControllerHelper_MapHelper::IwQNvexHUPPgfWTtCngRIAdZYvB(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IwQNvexHUPPgfWTtCngRIAdZYvB");
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	params[2] = (intptr_t)&A_3;
	params[3] = (intptr_t)&A_4;
	params[4] = (intptr_t)A_5;
	params[5] = (intptr_t)&A_6;
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
