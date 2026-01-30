#include "System_TimeZoneInfo_TransitionTime.h"

IL2CPP::Il2CppClass* mscorlib::System::TimeZoneInfo_TransitionTime::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::TimeZoneInfo::GetIl2CppClass(), "TransitionTime");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::TimeZoneInfo_TransitionTime::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::DateTime mscorlib::System::TimeZoneInfo_TransitionTime::get_TimeOfDay()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TimeOfDay");
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
int32_t mscorlib::System::TimeZoneInfo_TransitionTime::get_Month()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Month");
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
int32_t mscorlib::System::TimeZoneInfo_TransitionTime::get_Week()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Week");
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
int32_t mscorlib::System::TimeZoneInfo_TransitionTime::get_Day()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Day");
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
mscorlib::System::DayOfWeek mscorlib::System::TimeZoneInfo_TransitionTime::get_DayOfWeek()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DayOfWeek");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DayOfWeek ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DayOfWeek));
		return ret;
	}
	return static_cast<mscorlib::System::DayOfWeek>(*(mscorlib::System::DayOfWeek*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::TimeZoneInfo_TransitionTime::get_IsFixedDateRule()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsFixedDateRule");
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
bool mscorlib::System::TimeZoneInfo_TransitionTime::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
bool mscorlib::System::TimeZoneInfo_TransitionTime::op_Inequality(mscorlib::System::TimeZoneInfo_TransitionTime t1, mscorlib::System::TimeZoneInfo_TransitionTime t2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "System.TimeZoneInfo/TransitionTime", "System.TimeZoneInfo/TransitionTime" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&t1;
	params[1] = (intptr_t)&t2;
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
bool mscorlib::System::operator!=(mscorlib::System::TimeZoneInfo_TransitionTime& t1, mscorlib::System::TimeZoneInfo_TransitionTime& t2)
{
	return mscorlib::System::TimeZoneInfo_TransitionTime::op_Inequality(t1, t2);
}
bool mscorlib::System::TimeZoneInfo_TransitionTime::Equals(mscorlib::System::TimeZoneInfo_TransitionTime other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.TimeZoneInfo/TransitionTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
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
int32_t mscorlib::System::TimeZoneInfo_TransitionTime::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
mscorlib::System::TimeZoneInfo_TransitionTime mscorlib::System::TimeZoneInfo_TransitionTime::CreateFixedDateRule(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t day)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFixedDateRule", std::vector<std::string> { "System.DateTime", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&timeOfDay;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&day;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeZoneInfo_TransitionTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeZoneInfo_TransitionTime));
		return ret;
	}
	return static_cast<mscorlib::System::TimeZoneInfo_TransitionTime>(*(mscorlib::System::TimeZoneInfo_TransitionTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TimeZoneInfo_TransitionTime mscorlib::System::TimeZoneInfo_TransitionTime::CreateFloatingDateRule(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, mscorlib::System::DayOfWeek dayOfWeek)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateFloatingDateRule", std::vector<std::string> { "System.DateTime", "System.Int32", "System.Int32", "System.DayOfWeek" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&timeOfDay;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&week;
	params[3] = (intptr_t)&dayOfWeek;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeZoneInfo_TransitionTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeZoneInfo_TransitionTime));
		return ret;
	}
	return static_cast<mscorlib::System::TimeZoneInfo_TransitionTime>(*(mscorlib::System::TimeZoneInfo_TransitionTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::TimeZoneInfo_TransitionTime mscorlib::System::TimeZoneInfo_TransitionTime::CreateTransitionTime(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, mscorlib::System::DayOfWeek dayOfWeek, bool isFixedDateRule)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateTransitionTime", std::vector<std::string> { "System.DateTime", "System.Int32", "System.Int32", "System.Int32", "System.DayOfWeek", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&timeOfDay;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&week;
	params[3] = (intptr_t)&day;
	params[4] = (intptr_t)&dayOfWeek;
	params[5] = (intptr_t)&isFixedDateRule;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::TimeZoneInfo_TransitionTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::TimeZoneInfo_TransitionTime));
		return ret;
	}
	return static_cast<mscorlib::System::TimeZoneInfo_TransitionTime>(*(mscorlib::System::TimeZoneInfo_TransitionTime*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::TimeZoneInfo_TransitionTime::ValidateTransitionTime(mscorlib::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, mscorlib::System::DayOfWeek dayOfWeek)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateTransitionTime", std::vector<std::string> { "System.DateTime", "System.Int32", "System.Int32", "System.Int32", "System.DayOfWeek" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&timeOfDay;
	params[1] = (intptr_t)&month;
	params[2] = (intptr_t)&week;
	params[3] = (intptr_t)&day;
	params[4] = (intptr_t)&dayOfWeek;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(mscorlib::System::Object* sender)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)sender;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo", "System.Runtime.Serialization.StreamingContext" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)info;
	params[1] = (intptr_t)&context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::TimeZoneInfo_TransitionTime::_ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context)
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
