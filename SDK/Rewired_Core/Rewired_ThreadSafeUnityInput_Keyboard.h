#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ThreadSafeUnityInput.h"
namespace Rewired_Core::Rewired { struct ThreadSafeUnityInput; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"

namespace Rewired_Core::Rewired
{
	struct ThreadSafeUnityInput_Keyboard : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t gxWlXpXCjyXruZnAmfLDDjYnaTy;
		IL2CPP::Array<int32_t>* oIrQvauMcpmHEIPTZaDbAqGaqyIR;
		IL2CPP::Array<bool>* uvAhREFOzebpyBZAJEzwgBxETFh;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		int32_t apjrjYRusitZlASaGzQYNkNGKNJ;
		bool ofYffBilCOoQPsmnxDXnYZgcJBh;
		bool yeNyYNhgYOaguANEPEkNmNDrjFpH;
		struct StaticFields
		{
			int32_t UYTYbsOfpcmbNOtkxyDZRAQJBoP;
			int32_t keyValueIndex_Escape;
			int32_t keyValueIndex_Menu;
			int32_t keyValueIndex_F2;
			int32_t keyValueIndex_UpArrow;
			int32_t keyValueIndex_RightArrow;
			int32_t keyValueIndex_DownArrow;
			int32_t keyValueIndex_LeftArrow;
			IL2CPP::Array<int32_t>* hLCHLmDCBpGbkmOigiDhPiKrVIB;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_enabled();
		void set_enabled(bool value);
		bool get_monitoring();
		int32_t get_keyCount();
		static void _cctor();
		void _ctor();
		void Initialize();
		void PostInitialize();
		void Update();
		void Monitor(bool state);
		bool GetKey(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		void GetKeyValues(IL2CPP::Array<bool>* values);
		void Clear();
		void MTqBGqBfisAnvOaGvqcKpLCIfeNj();
		void bomyXZJQfFCBwVyslrttVIEyerC();
		void KlygjTczzRinASQsNzcdtldsMnc();
		void cuRQcQXPFhbzIokigYgIldBXDea();
		void ptEpSCmNBVTBydiuqtAveeVJcvW();
		void PlsfdEkfdddFkcJCfMEigMrepxrY();
	};
}

