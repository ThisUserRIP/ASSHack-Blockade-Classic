#include "System_TimeZoneInfo_AdjustmentRule.h"

IL2CPP::Il2CppClass* mscorlib::System::TimeZoneInfo_AdjustmentRule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::TimeZoneInfo::GetIl2CppClass(), "AdjustmentRule");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TimeZoneInfo_AdjustmentRule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo_AdjustmentRule::get_DateStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DateStart");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo_AdjustmentRule::get_DateEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DateEnd");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TimeSpan mscorlib::System::TimeZoneInfo_AdjustmentRule::get_DaylightDelta()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DaylightDelta");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeSpan ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeSpan));
		return ret;
	}
	return static_cast<mscorlib::System::TimeSpan>(*(mscorlib::System::TimeSpan*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TimeZoneInfo_TransitionTime mscorlib::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DaylightTransitionStart");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeZoneInfo_TransitionTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeZoneInfo_TransitionTime));
		return ret;
	}
	return static_cast<mscorlib::System::TimeZoneInfo_TransitionTime>(*(mscorlib::System::TimeZoneInfo_TransitionTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TimeZoneInfo_TransitionTime mscorlib::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DaylightTransitionEnd");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeZoneInfo_TransitionTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeZoneInfo_TransitionTime));
		return ret;
	}
	return static_cast<mscorlib::System::TimeZoneInfo_TransitionTime>(*(mscorlib::System::TimeZoneInfo_TransitionTime*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::TimeZoneInfo_AdjustmentRule::Equals(mscorlib::System::TimeZoneInfo_AdjustmentRule* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.TimeZoneInfo/AdjustmentRule" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
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
int32_t mscorlib::System::TimeZoneInfo_AdjustmentRule::GetHashCode()
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
void mscorlib::System::TimeZoneInfo_AdjustmentRule::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::TimeZoneInfo_AdjustmentRule* mscorlib::System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAdjustmentRule", std::vector<std::string> { "System.DateTime", "System.DateTime", "System.TimeSpan", "System.TimeZoneInfo/TransitionTime", "System.TimeZoneInfo/TransitionTime" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dateStart;
	params[1] = (intptr_t)&dateEnd;
	params[2] = (intptr_t)&daylightDelta;
	params[3] = (intptr_t)&daylightTransitionStart;
	params[4] = (intptr_t)&daylightTransitionEnd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo_AdjustmentRule*)returnValue;
}
mscorlib::System::TimeZoneInfo_AdjustmentRule* mscorlib::System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, mscorlib::System::TimeSpan baseUtcOffsetDelta)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateAdjustmentRule", std::vector<std::string> { "System.DateTime", "System.DateTime", "System.TimeSpan", "System.TimeZoneInfo/TransitionTime", "System.TimeZoneInfo/TransitionTime", "System.TimeSpan" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&dateStart;
	params[1] = (intptr_t)&dateEnd;
	params[2] = (intptr_t)&daylightDelta;
	params[3] = (intptr_t)&daylightTransitionStart;
	params[4] = (intptr_t)&daylightTransitionEnd;
	params[5] = (intptr_t)&baseUtcOffsetDelta;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::TimeZoneInfo_AdjustmentRule*)returnValue;
}
void mscorlib::System::TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule(mscorlib::System::DateTime dateStart, mscorlib::System::DateTime dateEnd, mscorlib::System::TimeSpan daylightDelta, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionStart, mscorlib::System::TimeZoneInfo_TransitionTime daylightTransitionEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateAdjustmentRule", std::vector<std::string> { "System.DateTime", "System.DateTime", "System.TimeSpan", "System.TimeZoneInfo/TransitionTime", "System.TimeZoneInfo/TransitionTime" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&dateStart;
	params[1] = (intptr_t)&dateEnd;
	params[2] = (intptr_t)&daylightDelta;
	params[3] = (intptr_t)&daylightTransitionStart;
	params[4] = (intptr_t)&daylightTransitionEnd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sender;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_AdjustmentRule::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
