#include "UnityEngine_Rendering_CoreUnsafeUtils_UintKeyGetter.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils::GetIl2CppClass(), "UintKeyGetter");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::CoreUnsafeUtils_UintKeyGetter::Get(uint32_t& v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "System.UInt32&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
