#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_TextCoreModule::UnityEngine::TextCore
{
	struct FaceInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_FaceIndex;
		mscorlib::System::String* m_FamilyName;
		mscorlib::System::String* m_StyleName;
		int32_t m_PointSize;
		float m_Scale;
		float m_LineHeight;
		float m_AscentLine;
		float m_CapLine;
		float m_MeanLine;
		float m_Baseline;
		float m_DescentLine;
		float m_SuperscriptOffset;
		float m_SuperscriptSize;
		float m_SubscriptOffset;
		float m_SubscriptSize;
		float m_UnderlineOffset;
		float m_UnderlineThickness;
		float m_StrikethroughOffset;
		float m_StrikethroughThickness;
		float m_TabWidth;
		void set_familyName(mscorlib::System::String* value);
		void set_styleName(mscorlib::System::String* value);
		int32_t get_pointSize();
		void set_pointSize(int32_t value);
		float get_scale();
		void set_scale(float value);
		float get_lineHeight();
		void set_lineHeight(float value);
		float get_ascentLine();
		void set_ascentLine(float value);
		float get_capLine();
		void set_capLine(float value);
		float get_meanLine();
		void set_meanLine(float value);
		float get_baseline();
		void set_baseline(float value);
		float get_descentLine();
		void set_descentLine(float value);
		float get_superscriptOffset();
		void set_superscriptOffset(float value);
		float get_superscriptSize();
		void set_superscriptSize(float value);
		float get_subscriptOffset();
		void set_subscriptOffset(float value);
		float get_subscriptSize();
		void set_subscriptSize(float value);
		float get_underlineOffset();
		void set_underlineOffset(float value);
		float get_underlineThickness();
		void set_underlineThickness(float value);
		float get_strikethroughOffset();
		void set_strikethroughOffset(float value);
		void set_strikethroughThickness(float value);
		float get_tabWidth();
		void set_tabWidth(float value);
	};
}

