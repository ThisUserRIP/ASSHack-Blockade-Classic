#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAlignment.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_FontStyle.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Rewired_Core::Rewired::Internal
{
	struct GUIText : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* tDCjXNhvSUEPhgpmEQQVRKcLRLzH;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* WleHjYSlSvRveflahcVEJQgtGulC;
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor aSfDLjIoWegbMmLKaotZaoxaSDBp;
		UnityEngine_TextRenderingModule::UnityEngine::TextAlignment ptyPitjyoxagtQHCWtbGzEXVfSS;
		float duEaluxFBPIXMGWopmtflcBrWwfC;
		UnityEngine_TextRenderingModule::UnityEngine::Font* fnmjUhqPlLhOeHHCvaYtAQriSbCR;
		int32_t LLvGWgENgQpotfaEGEowzizGWMpq;
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle PpLbYCqhUZMtUgzUCTBamPKBifG;
		UnityEngine_CoreModule::UnityEngine::Color TQxiopqsdwhQtojOAEivGyUnslJ;
		UnityEngine_CoreModule::UnityEngine::Vector2 _pixelOffset;
		bool _useUnityUI;
		bool XooCGVckOQePXQAisPqbcSYNnahW;
		bool onCLJOTWJgACusgvaRpfSHnKpKQ;
		bool mFzzLTdudAJwRFUdVryazgYOBdI;
		bool EAJpnFrvXfmBpODrtUYdFENFdPqd;
		bool WzDdelGtmGtjpMeEvMpJSXjTXUn;
		bool UCvAOsENHsdxDglVkFmJhrSkNbZw;
		bool IIJtBrokRJzHtgMbGIGLBoovZNpR;
		UnityEngine_UI::UnityEngine::UI::Text* ivRYmXSwELwvtRcEdCDuQfNaLDD;
		bool axYBsQBVrjDnjBMvFrUPFcZeDFmQ;
		bool DOuLqFprwkxywhYvzpBJqczxsJD;
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor get_anchor();
		void set_anchor(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAlignment get_alignment();
		void set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAlignment value);
		float get_lineSpacing();
		void set_lineSpacing(float value);
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		int32_t get_fontSize();
		void set_fontSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle get_fontStyle();
		void set_fontStyle(UnityEngine_TextRenderingModule::UnityEngine::FontStyle value);
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_pixelOffset();
		void set_pixelOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		bool get_useUnityUI();
		void set_useUnityUI(bool value);
		void Awake();
		void Start();
		void OnGUI();
		void Update();
		void OnValidate();
		void NxmKMgtdsRKhvoGyqWQORlDeNTK();
		void KuQVvOnAZJEptTJetbPxgNMqZerE();
		void sDslzBykYJugbCaGyNydKjTlAUG();
		static Rewired_Core::Rewired::Internal::GUIText* GetOrAddComponent(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		static Rewired_Core::Rewired::Internal::GUIText* CreateLogger(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor();
	};
}

