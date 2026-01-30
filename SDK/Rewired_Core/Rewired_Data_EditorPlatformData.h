#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Rewired_Core::Rewired::Data { struct EditorPlatformData_Platform; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
#include "Rewired_Platforms_Platform.h"
#include "Rewired_Platforms_WebplayerPlatform.h"
#include "Rewired_Platforms_EditorPlatform.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct EditorPlatformData : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* windowsStandalone;
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* windowsStore;
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* osxStandalone;
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* linuxStandalone;
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* webplayer;
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* fallback;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::TextAsset*>* GetLibraries(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform);
		Rewired_Core::Rewired::Data::EditorPlatformData_Platform* GetPlatform(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform);
		void _ctor();
	};
}

