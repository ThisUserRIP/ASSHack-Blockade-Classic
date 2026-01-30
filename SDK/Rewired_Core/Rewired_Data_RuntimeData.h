#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "Rewired_Platforms_Platform.h"
#include "Rewired_Platforms_WebplayerPlatform.h"
#include "Rewired_Platforms_EditorPlatform.h"
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct RuntimeData : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::Platform platform;
		Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform;
		Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::TextAsset>* libraries;
		void SetPlatform(Rewired_Core::Rewired::Platforms::Platform platform, Rewired_Core::Rewired::Platforms::WebplayerPlatform webplayerPlatform, Rewired_Core::Rewired::Platforms::EditorPlatform editorPlatform, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::TextAsset>* libraries);
		void _ctor();
	};
}

