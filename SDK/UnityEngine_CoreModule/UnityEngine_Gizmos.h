#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Gizmos : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void DrawLine(UnityEngine_CoreModule::UnityEngine::Vector3 from, UnityEngine_CoreModule::UnityEngine::Vector3 to);
		static void DrawWireSphere(UnityEngine_CoreModule::UnityEngine::Vector3 center, float radius);
		static void DrawSphere(UnityEngine_CoreModule::UnityEngine::Vector3 center, float radius);
		static void DrawWireCube(UnityEngine_CoreModule::UnityEngine::Vector3 center, UnityEngine_CoreModule::UnityEngine::Vector3 size);
		static void DrawCube(UnityEngine_CoreModule::UnityEngine::Vector3 center, UnityEngine_CoreModule::UnityEngine::Vector3 size);
		static void DrawIcon(UnityEngine_CoreModule::UnityEngine::Vector3 center, mscorlib::System::String* name, bool allowScaling);
		static void DrawIcon(UnityEngine_CoreModule::UnityEngine::Vector3 center, mscorlib::System::String* name, bool allowScaling, UnityEngine_CoreModule::UnityEngine::Color tint);
		static UnityEngine_CoreModule::UnityEngine::Color get_color();
		static void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_matrix();
		static void set_matrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		static void DrawRay(UnityEngine_CoreModule::UnityEngine::Vector3 from, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static void DrawLine_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& from, UnityEngine_CoreModule::UnityEngine::Vector3& to);
		static void DrawWireSphere_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& center, float radius);
		static void DrawSphere_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& center, float radius);
		static void DrawWireCube_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& center, UnityEngine_CoreModule::UnityEngine::Vector3& size);
		static void DrawCube_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& center, UnityEngine_CoreModule::UnityEngine::Vector3& size);
		static void DrawIcon_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& center, mscorlib::System::String* name, bool allowScaling, UnityEngine_CoreModule::UnityEngine::Color& tint);
		static void get_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void set_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		static void get_matrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		static void set_matrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& value);
	};
}

