#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UnityWebRequestModule\UnityEngine_Networking_DownloadHandler.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking
{
	struct DownloadHandlerTexture : UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture2D* mTexture;
		bool mHasTexture;
		bool mNonReadable;
		static intptr_t Create(UnityEngine_UnityWebRequestTextureModule::UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable);
		void InternalCreateTexture(bool readable);
		void _ctor(bool readable);
		IL2CPP::Array<uint8_t>* GetData();
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_texture();
		UnityEngine_CoreModule::UnityEngine::Texture2D* InternalGetTexture();
		UnityEngine_CoreModule::UnityEngine::Texture2D* InternalGetTextureNative();
	};
}

