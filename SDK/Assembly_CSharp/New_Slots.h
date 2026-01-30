#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct E_Menu; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct MainGUI; };
namespace Assembly_CSharp { struct BlockSet; };
namespace Assembly_CSharp { struct Block; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct New_Slots : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::E_Menu* EM;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Texture* Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Background_Hover;
		UnityEngine_CoreModule::UnityEngine::Texture* Background_Active;
		UnityEngine_CoreModule::UnityEngine::Texture* Name_Background;
		UnityEngine_CoreModule::UnityEngine::Texture2D* Border;
		UnityEngine_CoreModule::UnityEngine::Rect Rect;
		IL2CPP::Array<bool>* Active;
		IL2CPP::Array<bool>* Hover;
		IL2CPP::Array<mscorlib::System::String*>* Names;
		int32_t x;
		int32_t y;
		int32_t Inactive_Tabs_Space_X;
		int32_t E_Menu_Active_Tab_Index;
		int32_t E_Menu_Active_Item_PodIndex;
		Assembly_CSharp::MainGUI* MGUI;
		int32_t x_pos;
		int32_t y_pos;
		Assembly_CSharp::BlockSet* blockSet;
		IL2CPP::Array<Assembly_CSharp::Block*>* teamblock;
		UnityEngine_CoreModule::UnityEngine::Vector2 mousePos;
		void Start();
		void Update();
		void Draw_New_Slots(int32_t _active_slot);
		void Draw_Slot(int32_t index, bool _active, bool _slitno);
		void SetPadding(int32_t _top, int32_t _right, int32_t _bottom, int32_t _left);
		void _ctor();
	};
}

