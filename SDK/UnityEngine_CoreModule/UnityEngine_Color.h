#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Color
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float r;
		float g;
		float b;
		float a;
		void _ctor(float r, float g, float b, float a);
		void _ctor(float r, float g, float b);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Color other);
		static UnityEngine_CoreModule::UnityEngine::Color op_Addition(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
		static UnityEngine_CoreModule::UnityEngine::Color op_Subtraction(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
		static UnityEngine_CoreModule::UnityEngine::Color op_Multiply(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
		static UnityEngine_CoreModule::UnityEngine::Color op_Multiply(UnityEngine_CoreModule::UnityEngine::Color a, float b);
		static UnityEngine_CoreModule::UnityEngine::Color op_Multiply(float b, UnityEngine_CoreModule::UnityEngine::Color a);
		static UnityEngine_CoreModule::UnityEngine::Color op_Division(UnityEngine_CoreModule::UnityEngine::Color a, float b);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Color lhs, UnityEngine_CoreModule::UnityEngine::Color rhs);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Color lhs, UnityEngine_CoreModule::UnityEngine::Color rhs);
		static UnityEngine_CoreModule::UnityEngine::Color Lerp(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b, float t);
		UnityEngine_CoreModule::UnityEngine::Color RGBMultiplied(float multiplier);
		static UnityEngine_CoreModule::UnityEngine::Color get_red();
		static UnityEngine_CoreModule::UnityEngine::Color get_green();
		static UnityEngine_CoreModule::UnityEngine::Color get_blue();
		static UnityEngine_CoreModule::UnityEngine::Color get_white();
		static UnityEngine_CoreModule::UnityEngine::Color get_black();
		static UnityEngine_CoreModule::UnityEngine::Color get_yellow();
		static UnityEngine_CoreModule::UnityEngine::Color get_cyan();
		static UnityEngine_CoreModule::UnityEngine::Color get_magenta();
		static UnityEngine_CoreModule::UnityEngine::Color get_gray();
		static UnityEngine_CoreModule::UnityEngine::Color get_grey();
		static UnityEngine_CoreModule::UnityEngine::Color get_clear();
		UnityEngine_CoreModule::UnityEngine::Color get_linear();
		UnityEngine_CoreModule::UnityEngine::Color get_gamma();
		float get_maxColorComponent();
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Implicit(UnityEngine_CoreModule::UnityEngine::Color c);
		static UnityEngine_CoreModule::UnityEngine::Color op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector4 v);
		static void RGBToHSV(UnityEngine_CoreModule::UnityEngine::Color rgbColor, float& H, float& S, float& V);
		static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, float& H, float& S, float& V);
		static UnityEngine_CoreModule::UnityEngine::Color HSVToRGB(float H, float S, float V);
		static UnityEngine_CoreModule::UnityEngine::Color HSVToRGB(float H, float S, float V, bool hdr);
	};
	UnityEngine_CoreModule::UnityEngine::Color operator+(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
	UnityEngine_CoreModule::UnityEngine::Color operator-(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
	UnityEngine_CoreModule::UnityEngine::Color operator*(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
	UnityEngine_CoreModule::UnityEngine::Color operator*(UnityEngine_CoreModule::UnityEngine::Color a, float b);
	UnityEngine_CoreModule::UnityEngine::Color operator*(float b, UnityEngine_CoreModule::UnityEngine::Color a);
	UnityEngine_CoreModule::UnityEngine::Color operator/(UnityEngine_CoreModule::UnityEngine::Color a, float b);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Color& lhs, UnityEngine_CoreModule::UnityEngine::Color& rhs);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Color& lhs, UnityEngine_CoreModule::UnityEngine::Color& rhs);
}

