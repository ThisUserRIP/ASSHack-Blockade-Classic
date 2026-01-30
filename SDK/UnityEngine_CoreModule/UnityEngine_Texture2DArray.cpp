#include "UnityEngine_Texture2DArray.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Texture2DArray::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Texture2DArray");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Texture2DArray::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_CoreModule::UnityEngine::Texture2DArray::get_allSlices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allSlices");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Texture2DArray::get_isReadable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isReadable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Texture2DArray::Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CreateImpl", std::vector<std::string> { "UnityEngine.Texture2DArray", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&format;
	params[6] = (intptr_t)&flags;
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
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.Texture2DArray", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&format;
	params[6] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.DefaultFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&format;
	params[4] = (intptr_t)&flags;
	params[5] = (intptr_t)&mipCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&linear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipChain;
	params[5] = (intptr_t)&linear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipChain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2DArray::ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateIsNotCrunched", std::vector<std::string> { "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
