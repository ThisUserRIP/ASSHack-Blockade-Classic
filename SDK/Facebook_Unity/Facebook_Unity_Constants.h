#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_FacebookUnityPlatform.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity
{
	struct Constants : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::FacebookUnityPlatform> currentPlatform;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static System::System::Uri* get_GraphUrl();
		static mscorlib::System::String* get_GraphApiUserAgent();
		static bool get_IsMobile();
		static bool get_IsEditor();
		static bool get_IsWeb();
		static bool get_IsGameroom();
		static mscorlib::System::String* get_UnitySDKUserAgentSuffixLegacy();
		static mscorlib::System::String* get_UnitySDKUserAgent();
		static bool get_DebugMode();
		static Facebook_Unity::Facebook::Unity::FacebookUnityPlatform get_CurrentPlatform();
		static Facebook_Unity::Facebook::Unity::FacebookUnityPlatform GetCurrentPlatform();
	};
}

