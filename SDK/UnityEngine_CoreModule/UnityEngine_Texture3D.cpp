#include "UnityEngine_Texture3D.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Texture3D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Texture3D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Texture3D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::Texture3D::get_isReadable()
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::SetPixelImpl(int32_t image, int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixelImpl", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&z;
	params[4] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Texture3D::Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CreateImpl", std::vector<std::string> { "UnityEngine.Texture3D", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&format;
	params[6] = (intptr_t)&flags;
	params[7] = (intptr_t)&nativeTex;
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.Texture3D", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&d;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&format;
	params[6] = (intptr_t)&flags;
	params[7] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyImpl", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateMipmaps;
	params[1] = (intptr_t)&makeNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, int32_t miplevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixels", std::vector<std::string> { "UnityEngine.Color[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)colors;
	params[1] = (intptr_t)&miplevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixels", std::vector<std::string> { "UnityEngine.Color[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)colors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount)
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain)
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
void UnityEngine_CoreModule::UnityEngine::Texture3D::_ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&depth;
	params[3] = (intptr_t)&textureFormat;
	params[4] = (intptr_t)&mipChain;
	params[5] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::Apply(bool updateMipmaps, bool makeNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateMipmaps;
	params[1] = (intptr_t)&makeNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::Apply(bool updateMipmaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateMipmaps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::Apply()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::SetPixel(int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color color, int32_t mipLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixel", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	params[3] = (intptr_t)&color;
	params[4] = (intptr_t)&mipLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateIsNotCrunched", std::vector<std::string> { "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture3D::SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color& color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixelImpl_Injected", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&z;
	params[4] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
