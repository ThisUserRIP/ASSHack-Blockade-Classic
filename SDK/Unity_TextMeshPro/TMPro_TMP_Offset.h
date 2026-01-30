#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Offset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Left;
		float m_Right;
		float m_Top;
		float m_Bottom;
		float get_left();
		void set_left(float value);
		float get_right();
		void set_right(float value);
		float get_top();
		void set_top(float value);
		float get_bottom();
		void set_bottom(float value);
		float get_horizontal();
		void set_horizontal(float value);
		float get_vertical();
		void set_vertical(float value);
		static Unity_TextMeshPro::TMPro::TMP_Offset get_zero();
		void _ctor(float left, float right, float top, float bottom);
		void _ctor(float horizontal, float vertical);
		static bool op_Equality(Unity_TextMeshPro::TMPro::TMP_Offset lhs, Unity_TextMeshPro::TMPro::TMP_Offset rhs);
		static bool op_Inequality(Unity_TextMeshPro::TMPro::TMP_Offset lhs, Unity_TextMeshPro::TMPro::TMP_Offset rhs);
		static Unity_TextMeshPro::TMPro::TMP_Offset op_Multiply(Unity_TextMeshPro::TMPro::TMP_Offset a, float b);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(Unity_TextMeshPro::TMPro::TMP_Offset other);
		static void _cctor();
	};
	bool operator==(Unity_TextMeshPro::TMPro::TMP_Offset& lhs, Unity_TextMeshPro::TMPro::TMP_Offset& rhs);
	bool operator!=(Unity_TextMeshPro::TMPro::TMP_Offset& lhs, Unity_TextMeshPro::TMPro::TMP_Offset& rhs);
	Unity_TextMeshPro::TMPro::TMP_Offset operator*(Unity_TextMeshPro::TMPro::TMP_Offset a, float b);
}

