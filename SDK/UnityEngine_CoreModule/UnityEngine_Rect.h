#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Rect
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_XMin;
		float m_YMin;
		float m_Width;
		float m_Height;
		void _ctor(float x, float y, float width, float height);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector2 position, UnityEngine_CoreModule::UnityEngine::Vector2 size);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rect source);
		static UnityEngine_CoreModule::UnityEngine::Rect get_zero();
		static UnityEngine_CoreModule::UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax);
		float get_x();
		void set_x(float value);
		float get_y();
		void set_y(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_position();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_center();
		void set_center(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_min();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_max();
		float get_width();
		void set_width(float value);
		float get_height();
		void set_height(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_size();
		float get_xMin();
		void set_xMin(float value);
		float get_yMin();
		void set_yMin(float value);
		float get_xMax();
		void set_xMax(float value);
		float get_yMax();
		void set_yMax(float value);
		bool Contains(UnityEngine_CoreModule::UnityEngine::Vector2 point);
		bool Contains(UnityEngine_CoreModule::UnityEngine::Vector3 point);
		static UnityEngine_CoreModule::UnityEngine::Rect OrderMinMax(UnityEngine_CoreModule::UnityEngine::Rect rect);
		bool Overlaps(UnityEngine_CoreModule::UnityEngine::Rect other);
		bool Overlaps(UnityEngine_CoreModule::UnityEngine::Rect other, bool allowInverse);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Rect lhs, UnityEngine_CoreModule::UnityEngine::Rect rhs);
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Rect lhs, UnityEngine_CoreModule::UnityEngine::Rect rhs);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rect other);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
	};
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Rect& lhs, UnityEngine_CoreModule::UnityEngine::Rect& rhs);
	bool operator==(UnityEngine_CoreModule::UnityEngine::Rect& lhs, UnityEngine_CoreModule::UnityEngine::Rect& rhs);
}

