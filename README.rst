.. contents:: :local:

Description
-----------

``frn`` is a utility for streaming input to an auto-generated file.

Options
-------

..
    This table is embedded because GitHub completely botches
    the table formatting for CLI options.

.. raw:: html

    <blockquote>
        <table frame="void" rules="none">
            <tbody valign="top">
                <tr>
                    <td>
                        <kbd>
                            <span>-e, --extension <var>TYPE</var></span>
                        </kbd>
                    </td>
                    <td>[Required] Set file extension.</td>
                </tr>
                <tr>
                    <td>
                        <kbd>
                            <span>-h</span>, <span>--help</span>
                        </kbd>
                    </td>
                    <td>Show help information.</td>
                </tr>
                <tr>
                    <td>
                        <kbd>
                            <span>-v</span>, <span>--version</span>
                        </kbd>
                    </td>
                    <td>Show version number.</td>
                </tr>
            </tbody>
        </table>
    </blockquote>

Examples
--------

Send piped HTML input to .html file.

.. code-block:: sh

    echo '<!doctype html><html></html>' | frn -e html -

Send Makefile input to .txt file.

.. code-block:: sh

    frn -e txt < Makefile

See Also
--------

* `rand(3) <https://linux.die.net/man/3/rand>`_
* `rename(2) <https://linux.die.net/man/2/rename>`_
