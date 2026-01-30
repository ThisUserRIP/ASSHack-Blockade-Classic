#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_CompoundElement.h"
#include "Rewired_Controller.h"
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct Controller_Button; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System { struct String; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired
{
	struct Controller_Hat : Rewired_Core::Rewired::Controller_CompoundElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t KSkxgmeAibZmoSEgTBaxFJPluaa;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_Button*>* KSpzNAgatRNMZeWMcWyvXBJKZgz;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Button>* tXtfQEdsFIvSMlIUVwGguSXNVJT;
		IL2CPP::Array<int32_t>* sdOhBgqNRLJRIdSDeJZgoRJnqTv;
		bool UBLqUhoZYLhQxhDbifstFCYapyQi;
		struct StaticFields
		{
			int32_t tqZnscdsIoYyNIsJSCeVpOCKhyOB;
			int32_t ItZwuZJHMrIhculjNePMHOWFtxz;
			int32_t nuBRmmmWAVNHneFspHrBmFTfAFI;
			int32_t GHQLfVAMfUdlySlzLmeSFpRkCTOf;
			int32_t hGYCHySPaifnocJKLPHmHjLAkOiz;
			int32_t MIuUPkqLJJpZJxigLEjgvMLXtcA;
			int32_t GbqpFFCIykHhzBkLkvjvZlvKwCv;
			int32_t CwYJIgEPGgbDJbvhvAAxFQxqhTez;
			int32_t lycMLKDvsIMvPTOpWCiKTvadcoS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t get_elementCapacity();
		bool get_force4Way();
		void set_force4Way(bool value);
		int32_t get_directionCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Button>* get_Buttons();
		Rewired_Core::Rewired::Controller_Button* get_buttonUp();
		Rewired_Core::Rewired::Controller_Button* get_buttonRight();
		Rewired_Core::Rewired::Controller_Button* get_buttonDown();
		Rewired_Core::Rewired::Controller_Button* get_buttonLeft();
		Rewired_Core::Rewired::Controller_Button* get_buttonUpRight();
		Rewired_Core::Rewired::Controller_Button* get_buttonDownRight();
		Rewired_Core::Rewired::Controller_Button* get_buttonDownLeft();
		Rewired_Core::Rewired::Controller_Button* get_buttonUpLeft();
		void _ctor(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId, mscorlib::System::String* name, IL2CPP::Array<Rewired_Core::Rewired::Controller_Button*>* buttons, IL2CPP::Array<int32_t>* buttonIndices);
		void GESNSEAFNCRhlrpprwhsHqbXxcO(Rewired_Core::Rewired::UpdateLoopType A_1, Rewired_Core::Rewired::ControllerDataUpdater* A_2);
		void vMHudtYzoJCswPwynyjWlbhSjyg(Rewired_Core::Rewired::Controller_Button* A_1, int32_t A_2, int32_t A_3, int32_t A_4, Rewired_Core::Rewired::UpdateLoopType A_5, Rewired_Core::Rewired::ControllerDataUpdater* A_6);
		void ozJiwzGYogdzzzdADhgulpvqBIB(Rewired_Core::Rewired::Controller_Button* A_1, int32_t A_2, Rewired_Core::Rewired::UpdateLoopType A_3, Rewired_Core::Rewired::ControllerDataUpdater* A_4);
	};
}

