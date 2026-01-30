#include "Unity_Mathematics_math.h"

IL2CPP::Il2CppClass* Unity_Mathematics::Unity::Mathematics::math::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.Mathematics.dll", "Unity.Mathematics", "math");
	return il2cppclass;
}
mscorlib::System::Type* Unity_Mathematics::Unity::Mathematics::math::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Unity_Mathematics::Unity::Mathematics::float2 Unity_Mathematics::Unity::Mathematics::math::float2(float x, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "float2", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float2>(*(Unity_Mathematics::Unity::Mathematics::float2*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::float2 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.float2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::float3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::float4 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.float4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_Mathematics::Unity::Mathematics::math::asint(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asint", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
uint32_t Unity_Mathematics::Unity::Mathematics::math::asuint(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asuint", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint2 Unity_Mathematics::Unity::Mathematics::math::asuint(Unity_Mathematics::Unity::Mathematics::float2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asuint", std::vector<std::string> { "Unity.Mathematics.float2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint2>(*(Unity_Mathematics::Unity::Mathematics::uint2*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint3 Unity_Mathematics::Unity::Mathematics::math::asuint(Unity_Mathematics::Unity::Mathematics::float3 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asuint", std::vector<std::string> { "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint3>(*(Unity_Mathematics::Unity::Mathematics::uint3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint4 Unity_Mathematics::Unity::Mathematics::math::asuint(Unity_Mathematics::Unity::Mathematics::float4 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asuint", std::vector<std::string> { "Unity.Mathematics.float4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint4 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint4));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint4>(*(Unity_Mathematics::Unity::Mathematics::uint4*)il2cpp_object_unbox(returnValue));
}
float Unity_Mathematics::Unity::Mathematics::math::asfloat(int32_t x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asfloat", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
float Unity_Mathematics::Unity::Mathematics::math::asfloat(uint32_t x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asfloat", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
Unity_Mathematics::Unity::Mathematics::float2 Unity_Mathematics::Unity::Mathematics::math::asfloat(Unity_Mathematics::Unity::Mathematics::uint2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "asfloat", std::vector<std::string> { "Unity.Mathematics.uint2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float2>(*(Unity_Mathematics::Unity::Mathematics::float2*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_Mathematics::Unity::Mathematics::math::min(int32_t x, int32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "min", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
float Unity_Mathematics::Unity::Mathematics::math::min(float x, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "min", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::math::min(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "min", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_Mathematics::Unity::Mathematics::math::max(int32_t x, int32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "max", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
float Unity_Mathematics::Unity::Mathematics::math::max(float x, float y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "max", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::math::max(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "max", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float2 Unity_Mathematics::Unity::Mathematics::math::abs(Unity_Mathematics::Unity::Mathematics::float2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "abs", std::vector<std::string> { "Unity.Mathematics.float2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float2>(*(Unity_Mathematics::Unity::Mathematics::float2*)il2cpp_object_unbox(returnValue));
}
float Unity_Mathematics::Unity::Mathematics::math::dot(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dot", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
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
float Unity_Mathematics::Unity::Mathematics::math::cos(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cos", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
float Unity_Mathematics::Unity::Mathematics::math::sin(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sin", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
float Unity_Mathematics::Unity::Mathematics::math::sqrt(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sqrt", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
float Unity_Mathematics::Unity::Mathematics::math::rsqrt(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rsqrt", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::math::normalize(Unity_Mathematics::Unity::Mathematics::float3 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "normalize", std::vector<std::string> { "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
float Unity_Mathematics::Unity::Mathematics::math::length(Unity_Mathematics::Unity::Mathematics::float3 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "length", std::vector<std::string> { "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
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
Unity_Mathematics::Unity::Mathematics::float3 Unity_Mathematics::Unity::Mathematics::math::cross(Unity_Mathematics::Unity::Mathematics::float3 x, Unity_Mathematics::Unity::Mathematics::float3 y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cross", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float3>(*(Unity_Mathematics::Unity::Mathematics::float3*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::select(uint32_t a, uint32_t b, bool c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "select", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::csum(Unity_Mathematics::Unity::Mathematics::uint2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "csum", std::vector<std::string> { "Unity.Mathematics.uint2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::csum(Unity_Mathematics::Unity::Mathematics::uint3 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "csum", std::vector<std::string> { "Unity.Mathematics.uint3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::csum(Unity_Mathematics::Unity::Mathematics::uint4 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "csum", std::vector<std::string> { "Unity.Mathematics.uint4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint2 Unity_Mathematics::Unity::Mathematics::math::uint2(uint32_t x, uint32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uint2", std::vector<std::string> { "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint2 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint2));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint2>(*(Unity_Mathematics::Unity::Mathematics::uint2*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::uint2 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.uint2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint3 Unity_Mathematics::Unity::Mathematics::math::uint3(uint32_t x, uint32_t y, uint32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uint3", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.UInt32" });
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
		Unity_Mathematics::Unity::Mathematics::uint3 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint3));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint3>(*(Unity_Mathematics::Unity::Mathematics::uint3*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::uint3 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.uint3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::uint4 Unity_Mathematics::Unity::Mathematics::math::uint4(uint32_t x, uint32_t y, uint32_t z, uint32_t w)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uint4", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.UInt32", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	params[3] = (intptr_t)&w;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::uint4 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::uint4));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::uint4>(*(Unity_Mathematics::Unity::Mathematics::uint4*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_Mathematics::Unity::Mathematics::math::hash(Unity_Mathematics::Unity::Mathematics::uint4 v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hash", std::vector<std::string> { "Unity.Mathematics.uint4" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
