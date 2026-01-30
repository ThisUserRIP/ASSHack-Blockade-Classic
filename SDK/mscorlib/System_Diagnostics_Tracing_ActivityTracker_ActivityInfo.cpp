#include "System_Diagnostics_Tracing_ActivityTracker_ActivityInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Diagnostics::Tracing::ActivityTracker::GetIl2CppClass(), "ActivityInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::_ctor(mscorlib::System::String* name, int64_t uniqueId, mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* creator, mscorlib::System::Guid activityIDToRestore, mscorlib::System::Diagnostics::Tracing::EventActivityOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int64", "System.Diagnostics.Tracing.ActivityTracker/ActivityInfo", "System.Guid", "System.Diagnostics.Tracing.EventActivityOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&uniqueId;
	params[2] = (intptr_t)creator;
	params[3] = (intptr_t)&activityIDToRestore;
	params[4] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Guid mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::get_ActivityId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActivityId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Guid ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Guid));
		return ret;
	}
	return static_cast<mscorlib::System::Guid>(*(mscorlib::System::Guid*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::Path(mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* activityInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Path", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityTracker/ActivityInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)activityInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::LiveActivities(mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LiveActivities", std::vector<std::string> { "System.Diagnostics.Tracing.ActivityTracker/ActivityInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::CanBeOrphan()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CanBeOrphan");
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
void mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::CreateActivityPathGuid(mscorlib::System::Guid& idRet, int32_t& activityPathGuidOffset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateActivityPathGuid", std::vector<std::string> { "System.Guid&", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&idRet;
	params[1] = (intptr_t)&activityPathGuidOffset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::CreateOverflowGuid(mscorlib::System::Guid* outPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateOverflowGuid", std::vector<std::string> { "System.Guid*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)outPtr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::AddIdToGuid(mscorlib::System::Guid* outPtr, int32_t whereToAddId, uint32_t id, bool overflow)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddIdToGuid", std::vector<std::string> { "System.Guid*", "System.Int32", "System.UInt32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)outPtr;
	params[1] = (intptr_t)&whereToAddId;
	params[2] = (intptr_t)&id;
	params[3] = (intptr_t)&overflow;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo::WriteNibble(uint8_t& ptr, uint8_t* endPtr, uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNibble", std::vector<std::string> { "System.Byte*&", "System.Byte*", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ptr;
	params[1] = (intptr_t)endPtr;
	params[2] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
