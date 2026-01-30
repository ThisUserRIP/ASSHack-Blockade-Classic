#include "UnityEngine_Experimental_Rendering_GraphicsFormatUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetFormat(UnityEngine_CoreModule::UnityEngine::Texture* texture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFormat", std::vector<std::string> { "UnityEngine.Texture" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)texture;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool isSRGB)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsFormat", std::vector<std::string> { "UnityEngine.TextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&isSRGB;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool isSRGB)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsFormat_Native_TextureFormat", std::vector<std::string> { "UnityEngine.TextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&isSRGB;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, bool isSRGB)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsFormat", std::vector<std::string> { "UnityEngine.RenderTextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&isSRGB;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, bool isSRGB)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsFormat_Native_RenderTextureFormat", std::vector<std::string> { "UnityEngine.RenderTextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&isSRGB;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, UnityEngine_CoreModule::UnityEngine::RenderTextureReadWrite readWrite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGraphicsFormat", std::vector<std::string> { "UnityEngine.RenderTextureFormat", "UnityEngine.RenderTextureReadWrite" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&format;
	params[1] = (intptr_t)&readWrite;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat>(*(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsSRGBFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSRGBFormat", std::vector<std::string> { "UnityEngine.Experimental.Rendering.GraphicsFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&format;
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
UnityEngine_CoreModule::UnityEngine::RenderTextureFormat UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRenderTextureFormat", std::vector<std::string> { "UnityEngine.Experimental.Rendering.GraphicsFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&format;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::RenderTextureFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::RenderTextureFormat>(*(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCompressedTextureFormat", std::vector<std::string> { "UnityEngine.TextureFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&format;
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
bool UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCrunchFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCrunchFormat", std::vector<std::string> { "UnityEngine.TextureFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&format;
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
