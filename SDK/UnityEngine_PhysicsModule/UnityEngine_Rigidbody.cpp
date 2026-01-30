#include "UnityEngine_Rigidbody.h"

IL2CPP::Il2CppClass* UnityEngine_PhysicsModule::UnityEngine::Rigidbody::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.PhysicsModule.dll", "UnityEngine", "Rigidbody");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_PhysicsModule::UnityEngine::Rigidbody::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_velocity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_velocity");
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
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_velocity(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_velocity", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_angularVelocity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_angularVelocity");
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
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_angularVelocity(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_angularVelocity", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_drag(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_drag", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_angularDrag(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_angularDrag", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_mass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_mass");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_mass(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_mass", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_useGravity(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_useGravity", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_isKinematic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isKinematic");
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
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_isKinematic(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isKinematic", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_freezeRotation(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_freezeRotation", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_constraints(UnityEngine_PhysicsModule::UnityEngine::RigidbodyConstraints value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_constraints", std::vector<std::string> { "UnityEngine.RigidbodyConstraints" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_centerOfMass(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_centerOfMass", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_worldCenterOfMass()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_worldCenterOfMass");
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
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_position()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_position");
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
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_position", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Quaternion UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_rotation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Quaternion ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Quaternion));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Quaternion>(*(UnityEngine_CoreModule::UnityEngine::Quaternion*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_rotation(UnityEngine_CoreModule::UnityEngine::Quaternion value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rotation", std::vector<std::string> { "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_interpolation(UnityEngine_PhysicsModule::UnityEngine::RigidbodyInterpolation value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_interpolation", std::vector<std::string> { "UnityEngine.RigidbodyInterpolation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_maxAngularVelocity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_maxAngularVelocity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_maxAngularVelocity(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_maxAngularVelocity", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::MovePosition(UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MovePosition", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::MoveRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveRotation", std::vector<std::string> { "UnityEngine.Quaternion" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::Sleep()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sleep");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::WakeUp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WakeUp");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_PhysicsModule::UnityEngine::Rigidbody::GetPointVelocity(UnityEngine_CoreModule::UnityEngine::Vector3 worldPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPointVelocity", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&worldPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForce", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForce", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&force;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeForce(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeForce", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeForce(UnityEngine_CoreModule::UnityEngine::Vector3 force)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeForce", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&force;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTorque", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&torque;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTorque", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&torque;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeTorque", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&torque;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeTorque", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&torque;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForceAtPosition(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForceAtPosition", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForceAtPosition(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForceAtPosition", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddExplosionForce(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3 explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExplosionForce", std::vector<std::string> { "System.Single", "UnityEngine.Vector3", "System.Single", "System.Single", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&explosionForce;
	params[1] = (intptr_t)&explosionPosition;
	params[2] = (intptr_t)&explosionRadius;
	params[3] = (intptr_t)&upwardsModifier;
	params[4] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddExplosionForce(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3 explosionPosition, float explosionRadius, float upwardsModifier)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExplosionForce", std::vector<std::string> { "System.Single", "UnityEngine.Vector3", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&explosionForce;
	params[1] = (intptr_t)&explosionPosition;
	params[2] = (intptr_t)&explosionRadius;
	params[3] = (intptr_t)&upwardsModifier;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_velocity_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_velocity_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_angularVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_angularVelocity_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_angularVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_angularVelocity_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_centerOfMass_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_centerOfMass_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_worldCenterOfMass_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_worldCenterOfMass_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_position_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_position_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::get_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_rotation_Injected", std::vector<std::string> { "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::set_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_rotation_Injected", std::vector<std::string> { "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::MovePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MovePosition_Injected", std::vector<std::string> { "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::MoveRotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rot)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveRotation_Injected", std::vector<std::string> { "UnityEngine.Quaternion&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rot;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::GetPointVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& worldPoint, UnityEngine_CoreModule::UnityEngine::Vector3& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPointVelocity_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&worldPoint;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForce_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForce_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeForce_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeForce_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddTorque_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTorque_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&torque;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddRelativeTorque_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRelativeTorque_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&torque;
	params[1] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddForceAtPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddForceAtPosition_Injected", std::vector<std::string> { "UnityEngine.Vector3&", "UnityEngine.Vector3&", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&force;
	params[1] = (intptr_t)&position;
	params[2] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_PhysicsModule::UnityEngine::Rigidbody::AddExplosionForce_Injected(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3& explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddExplosionForce_Injected", std::vector<std::string> { "System.Single", "UnityEngine.Vector3&", "System.Single", "System.Single", "UnityEngine.ForceMode" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&explosionForce;
	params[1] = (intptr_t)&explosionPosition;
	params[2] = (intptr_t)&explosionRadius;
	params[3] = (intptr_t)&upwardsModifier;
	params[4] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
