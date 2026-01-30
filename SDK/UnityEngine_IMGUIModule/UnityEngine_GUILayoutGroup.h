#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_GUILayoutEntry.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayoutGroup : UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry>* entries;
		bool isVertical;
		bool resetCoords;
		float spacing;
		bool sameSize;
		bool isWindow;
		int32_t windowID;
		int32_t m_Cursor;
		int32_t m_StretchableCountX;
		int32_t m_StretchableCountY;
		bool m_UserSpecifiedWidth;
		bool m_UserSpecifiedHeight;
		float m_ChildMinWidth;
		float m_ChildMaxWidth;
		float m_ChildMinHeight;
		float m_ChildMaxHeight;
		int32_t m_MarginLeft;
		int32_t m_MarginRight;
		int32_t m_MarginTop;
		int32_t m_MarginBottom;
		struct StaticFields
		{
			UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry* none;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_marginLeft();
		int32_t get_marginRight();
		int32_t get_marginTop();
		int32_t get_marginBottom();
		void _ctor();
		void ApplyOptions(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		void ApplyStyleSettings(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		void ResetCursor();
		UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry* GetNext();
		UnityEngine_CoreModule::UnityEngine::Rect GetLast();
		void Add(UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry* e);
		void CalcWidth();
		void SetHorizontal(float x, float width);
		void CalcHeight();
		void SetVertical(float y, float height);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

