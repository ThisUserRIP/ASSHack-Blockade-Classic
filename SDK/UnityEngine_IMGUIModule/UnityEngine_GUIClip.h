#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIClip : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Rect get_visibleRect();
		static void Internal_Push(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2 renderOffset, bool resetOffset);
		static void Internal_Pop();
		static UnityEngine_CoreModule::UnityEngine::Vector2 Unclip_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		static UnityEngine_CoreModule::UnityEngine::Vector2 UnclipToWindow_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ClipToWindow_Vector2(UnityEngine_CoreModule::UnityEngine::Vector2 absolutePos);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 GetMatrix();
		static void SetMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 m);
		static void Push(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2 renderOffset, bool resetOffset);
		static void Pop();
		static UnityEngine_CoreModule::UnityEngine::Vector2 Unclip(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		static UnityEngine_CoreModule::UnityEngine::Vector2 UnclipToWindow(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ClipToWindow(UnityEngine_CoreModule::UnityEngine::Vector2 absolutePos);
		static void get_visibleRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		static void Internal_Push_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_CoreModule::UnityEngine::Vector2& scrollOffset, UnityEngine_CoreModule::UnityEngine::Vector2& renderOffset, bool resetOffset);
		static void Unclip_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& pos, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void UnclipToWindow_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& pos, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void ClipToWindow_Vector2_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& absolutePos, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void GetMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		static void SetMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& m);
	};
}

