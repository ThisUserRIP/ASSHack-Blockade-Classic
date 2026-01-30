#include "Rewired_Utils_Classes_Data_IntVector4.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Data", "IntVector4");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::_ctor(int32_t inX, int32_t inY, int32_t inZ, int32_t inQ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&inX;
	params[1] = (intptr_t)&inY;
	params[2] = (intptr_t)&inZ;
	params[3] = (intptr_t)&inQ;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "Rewired.Utils.Classes.Data.IntVector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "Rewired.Utils.Classes.Data.IntVector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "Rewired.Utils.Classes.Data.IntVector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "Rewired.Utils.Classes.Data.IntVector4" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, int32_t value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, int32_t value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, int32_t value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, int32_t value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, int32_t value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, int32_t value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, int32_t value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Data::IntVector4*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* Rewired_Core::Rewired::Utils::Classes::Data::operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, int32_t value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(value1, value2);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Addition(value1, value2);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Subtraction(value1, value2);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Multiply(value1, value2);
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4* value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Rewired.Utils.Classes.Data.IntVector4", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector4 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector4));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector4>(*(UnityEngine_CoreModule::UnityEngine::Vector4*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector4 Rewired_Core::Rewired::Utils::Classes::Data::operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntVector4& value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::IntVector4::op_Division(value1, value2);
}
