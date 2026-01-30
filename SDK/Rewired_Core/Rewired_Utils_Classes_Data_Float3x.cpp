#include "Rewired_Utils_Classes_Data_Float3x.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Data", "Float3x");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float Rewired_Core::Rewired::Utils::Classes::Data::Float3x::get_Item(int32_t index)
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
void Rewired_Core::Rewired::Utils::Classes::Data::Float3x::set_Item(int32_t index, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Data::Float3x::_ctor(float x, float y, float z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Clone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Clone(Rewired_Core::Rewired::Utils::Classes::Data::Float3x obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clone", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::get_Zero()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Zero");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Equals(mscorlib::System::Object* obj)
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
int32_t Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetHashCode()
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
bool Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Equals(Rewired_Core::Rewired::Utils::Classes::Data::Float3x other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x" });
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
mscorlib::System::String* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Add(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Add", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Subtract(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Subtract", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::Divide(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Divide", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetAdditionDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAdditionDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>*)returnValue;
}
mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetSubtractionDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubtractionDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>*)returnValue;
}
mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetMultiplicationDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMultiplicationDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>*)returnValue;
}
mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>* Rewired_Core::Rewired::Utils::Classes::Data::Float3x::GetDivisionDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDivisionDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Func_3<Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x, Rewired_Core::Rewired::Utils::Classes::Data::Float3x>*)returnValue;
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector3 obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Implicit(Rewired_Core::Rewired::Utils::Classes::Data::Float3x obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&obj;
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
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Addition(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Subtraction(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Multiply(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "Rewired.Utils.Classes.Data.Float3x" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, Rewired_Core::Rewired::Utils::Classes::Data::Float3x value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Division(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Addition", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator+(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Addition(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Subtraction", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator-(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Subtraction(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Multiply", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Multiply(value1, value2);
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Division(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Division", std::vector<std::string> { "Rewired.Utils.Classes.Data.Float3x", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value1;
	params[1] = (intptr_t)&value2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::Utils::Classes::Data::Float3x ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::Utils::Classes::Data::Float3x));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::Utils::Classes::Data::Float3x>(*(Rewired_Core::Rewired::Utils::Classes::Data::Float3x*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::Utils::Classes::Data::Float3x Rewired_Core::Rewired::Utils::Classes::Data::operator/(Rewired_Core::Rewired::Utils::Classes::Data::Float3x value1, float value2)
{
	return Rewired_Core::Rewired::Utils::Classes::Data::Float3x::op_Division(value1, value2);
}
