//
// Created by milerius on 03/02/18.
//

#pragma once

#include <SFME/mediator/config.hpp>
#include <string_view>

namespace sfme::mediator
{
    struct InsideEvents
    {
    protected:
        void showEvents(std::string_view str) const noexcept
        {
            _log(logging::Debug) << "Events " << str << " triggered." << std::endl;
        }

        logging::Logger _log{"InsideEvents", logging::Debug};
    };
}
