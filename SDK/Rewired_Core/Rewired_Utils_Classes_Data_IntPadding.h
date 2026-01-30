#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct IntPadding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t top;
		int32_t right;
		int32_t bottom;
		int32_t left;
		void _ctor();
		void _ctor(int32_t inTop, int32_t inRight, int32_t inBottom, int32_t inLeft);
		Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* Clone();
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, int32_t value2);
		static Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, int32_t value2);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Addition(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Subtraction(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Multiply(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, float value2);
		static UnityEngine_CoreModule::UnityEngine::Vector4 op_Division(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* value1, float value2);
	};
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, int32_t value2);
	Rewired_Core::Rewired::Utils::Classes::Data::IntPadding* operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, int32_t value2);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator+(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator-(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator*(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, float value2);
	UnityEngine_CoreModule::UnityEngine::Vector4 operator/(Rewired_Core::Rewired::Utils::Classes::Data::IntPadding& value1, float value2);
}

