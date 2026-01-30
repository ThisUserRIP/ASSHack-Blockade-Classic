#include "UnityEngine_Quaternion.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Quaternion::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Quaternion");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Quaternion::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::FromToRotation(UnityEngine_CoreModule::UnityEngine::Vector3 fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3 toDirection)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromToRotation", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fromDirection;
	params[1] = (intptr_t)&toDirection;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Inverse(UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Inverse", std::vector<std::string> { "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Slerp(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Slerp", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::SlerpUnclamped(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SlerpUnclamped", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Lerp(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lerp", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_FromEulerRad(UnityEngine_CoreModule::UnityEngine::Vector3 euler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_FromEulerRad", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&euler;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_ToEulerRad(UnityEngine_CoreModule::UnityEngine::Quaternion rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ToEulerRad", std::vector<std::string> { "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rotation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_ToAxisAngleRad(UnityEngine_CoreModule::UnityEngine::Quaternion q, UnityEngine_CoreModule::UnityEngine::Vector3& axis, float& angle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ToAxisAngleRad", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Vector3&", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&q;
	params[1] = (intptr_t)&axis;
	params[2] = (intptr_t)&angle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::AngleAxis(float angle, UnityEngine_CoreModule::UnityEngine::Vector3 axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AngleAxis", std::vector<std::string> { "System.Single", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&angle;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::LookRotation(UnityEngine_CoreModule::UnityEngine::Vector3 forward, UnityEngine_CoreModule::UnityEngine::Vector3 upwards)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LookRotation", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&forward;
	params[1] = (intptr_t)&upwards;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::LookRotation(UnityEngine_CoreModule::UnityEngine::Vector3 forward)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LookRotation", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&forward;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_CoreModule::UnityEngine::Quaternion::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::_ctor(float x, float y, float z, float w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	params[3] = (intptr_t)&w;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::get_identity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_identity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::op_Multiply(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::operator*(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs)
{
	return UnityEngine_CoreModule::UnityEngine::Quaternion::op_Multiply(lhs, rhs);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_CoreModule::UnityEngine::Quaternion::op_Multiply(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rotation;
	params[1] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_CoreModule::UnityEngine::operator*(UnityEngine_CoreModule::UnityEngine::Quaternion rotation, UnityEngine_CoreModule::UnityEngine::Vector3 point)
{
	return UnityEngine_CoreModule::UnityEngine::Quaternion::op_Multiply(rotation, point);
}
bool UnityEngine_CoreModule::UnityEngine::Quaternion::IsEqualUsingDot(float dot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEqualUsingDot", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dot;
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
bool UnityEngine_CoreModule::UnityEngine::Quaternion::op_Equality(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
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
bool UnityEngine_CoreModule::UnityEngine::operator==(UnityEngine_CoreModule::UnityEngine::Quaternion& lhs, UnityEngine_CoreModule::UnityEngine::Quaternion& rhs)
{
	return UnityEngine_CoreModule::UnityEngine::Quaternion::op_Equality(lhs, rhs);
}
bool UnityEngine_CoreModule::UnityEngine::Quaternion::op_Inequality(UnityEngine_CoreModule::UnityEngine::Quaternion lhs, UnityEngine_CoreModule::UnityEngine::Quaternion rhs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lhs;
	params[1] = (intptr_t)&rhs;
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
bool UnityEngine_CoreModule::UnityEngine::operator!=(UnityEngine_CoreModule::UnityEngine::Quaternion& lhs, UnityEngine_CoreModule::UnityEngine::Quaternion& rhs)
{
	return UnityEngine_CoreModule::UnityEngine::Quaternion::op_Inequality(lhs, rhs);
}
float UnityEngine_CoreModule::UnityEngine::Quaternion::Dot(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dot", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_CoreModule::UnityEngine::Quaternion::Angle(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Angle", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_MakePositive(UnityEngine_CoreModule::UnityEngine::Vector3 euler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_MakePositive", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&euler;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_CoreModule::UnityEngine::Quaternion::get_eulerAngles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eulerAngles");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::set_eulerAngles(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_eulerAngles", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Euler(float x, float y, float z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Euler", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::Euler(UnityEngine_CoreModule::UnityEngine::Vector3 euler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Euler", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&euler;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::ToAngleAxis(float& angle, UnityEngine_CoreModule::UnityEngine::Vector3& axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAngleAxis", std::vector<std::string> { "System.Single&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&angle;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_CoreModule::UnityEngine::Quaternion::RotateTowards(UnityEngine_CoreModule::UnityEngine::Quaternion from, UnityEngine_CoreModule::UnityEngine::Quaternion to, float maxDegreesDelta)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RotateTowards", std::vector<std::string> { "UnityEngine.Quaternion", "UnityEngine.Quaternion", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&from;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&maxDegreesDelta;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Quaternion::GetHashCode()
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
bool UnityEngine_CoreModule::UnityEngine::Quaternion::Equals(mscorlib::System::Object* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
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
bool UnityEngine_CoreModule::UnityEngine::Quaternion::Equals(UnityEngine_CoreModule::UnityEngine::Quaternion other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Quaternion" });
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
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::Quaternion::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::Quaternion::ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString", std::vector<std::string> { "System.String", "System.IFormatProvider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)format;
	params[1] = (intptr_t)formatProvider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::FromToRotation_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& fromDirection, UnityEngine_CoreModule::UnityEngine::Vector3& toDirection, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromToRotation_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&fromDirection;
	params[1] = (intptr_t)&toDirection;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Inverse_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rotation, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Inverse_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rotation;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Slerp_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Slerp_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::SlerpUnclamped_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SlerpUnclamped_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Lerp_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& a, UnityEngine_CoreModule::UnityEngine::Quaternion& b, float t, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Lerp_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Quaternion&", "System.Single", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&t;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_FromEulerRad_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& euler, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_FromEulerRad_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&euler;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_ToEulerRad_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rotation, UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ToEulerRad_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rotation;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::Internal_ToAxisAngleRad_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& q, UnityEngine_CoreModule::UnityEngine::Vector3& axis, float& angle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_ToAxisAngleRad_Injected", std::vector<std::string> { "UnityEngine.Quaternion&", "UnityEngine.Vector3&", "System.Single&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&q;
	params[1] = (intptr_t)&axis;
	params[2] = (intptr_t)&angle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::AngleAxis_Injected(float angle, UnityEngine_CoreModule::UnityEngine::Vector3& axis, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AngleAxis_Injected", std::vector<std::string> { "System.Single", "UnityEngine.Vector3&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&angle;
	params[1] = (intptr_t)&axis;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Quaternion::LookRotation_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& forward, UnityEngine_CoreModule::UnityEngine::Vector3& upwards, UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LookRotation_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&forward;
	params[1] = (intptr_t)&upwards;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
